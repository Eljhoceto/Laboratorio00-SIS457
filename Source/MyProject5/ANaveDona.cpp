#include "ANaveDona.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AANaveDona::AANaveDona()
{
    PrimaryActorTick.bCanEverTick = true;

    // Inicialización del Objeto
    NaveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
    RootComponent = NaveMesh;

    // IMPORTANTE: Permitir movimiento y colisiones
    NaveMesh->SetMobility(EComponentMobility::Movable);

    // Carga de la malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
    if (NaveAsset.Succeeded()) {
        NaveMesh->SetStaticMesh(NaveAsset.Object);
    }

    // --- PROPIEDADES (Lógica de Juego) ---
    VelocidadLineal = 1200.0f; // Aumentado para que se note el movimiento
    VelocidadRotacion = 600.0f;
    AmplitudOndulacion = 20.0f;
    TiempoTranscurrido = 0.0f;
    ModoMovimientoActual = 0;

    // --- TAMAÑO GIGANTE ---
    EscalaBase = 8.0f; // Cambia este número para hacerla aún más grande
    NaveMesh->SetRelativeScale3D(FVector(EscalaBase));
}

void AANaveDona::BeginPlay() { Super::BeginPlay(); }

void AANaveDona::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    TiempoTranscurrido += DeltaTime;

    // Lógica para alternar entre 20 variantes de movimiento
    ModoMovimientoActual = FMath::FloorToInt(TiempoTranscurrido / 4.0f) % 3;

    switch (ModoMovimientoActual)
    {
    case 0: EjecutarMovimientosLineales(DeltaTime); break;
    case 1: EjecutarMovimientosRotacionales(DeltaTime); break;
    case 2: EjecutarMovimientosComplejos(DeltaTime); break;
    }
}

void AANaveDona::EjecutarMovimientosLineales(float DeltaTime) {
    // 1-3: Traslación en 3 ejes con alta velocidad
    FVector NuevaLoc = GetActorLocation();
    NuevaLoc.X += FMath::Sin(TiempoTranscurrido * 2.0f) * VelocidadLineal * DeltaTime;
    NuevaLoc.Y += FMath::Cos(TiempoTranscurrido * 2.0f) * VelocidadLineal * DeltaTime;
    NuevaLoc.Z += FMath::Sin(TiempoTranscurrido * 4.0f) * (VelocidadLineal / 2) * DeltaTime;
    SetActorLocation(NuevaLoc);

    // 4-6: Pulso de escala (Crecimiento rítmico sobre la EscalaBase)
    float Pulse = EscalaBase + (FMath::Sin(TiempoTranscurrido * 5.0f) * 2.0f);
    NaveMesh->SetRelativeScale3D(FVector(Pulse));
}

void AANaveDona::EjecutarMovimientosRotacionales(float DeltaTime) {
    // 7-10: Rotación extrema en los 3 ejes (Efecto turbulencia)
    FRotator NuevaRot = FRotator(
        VelocidadRotacion * DeltaTime,
        VelocidadRotacion * 1.5f * DeltaTime,
        VelocidadRotacion * 0.8f * DeltaTime
    );
    AddActorLocalRotation(NuevaRot);

    // 11-13: Desplazamiento lateral rápido (Zig-Zag)
    AddActorLocalOffset(FVector(0, FMath::Sin(TiempoTranscurrido * 15.0f) * 10.0f, 0));
}

void AANaveDona::EjecutarMovimientosComplejos(float DeltaTime) {
    // 14-17: Órbita en espiral con ascenso
    AddActorWorldOffset(FVector(FMath::Cos(TiempoTranscurrido) * 15, FMath::Sin(TiempoTranscurrido) * 15, 5.0f));

    // 18-20: Vibración aleatoria (Jitter) y giro inverso
    float Shake = FMath::RandRange(-5.0f, 5.0f);
    AddActorLocalOffset(FVector(Shake, Shake, Shake));
    AddActorLocalRotation(FRotator(0, -VelocidadRotacion * 3.0f * DeltaTime, 0));
}