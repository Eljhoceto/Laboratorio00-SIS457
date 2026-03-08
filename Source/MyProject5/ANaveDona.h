#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ANaveDona.generated.h"

UCLASS()
class MYPROJECT5_API AANaveDona : public AActor
{
    GENERATED_BODY()

public:
    AANaveDona();

protected:
    virtual void BeginPlay() override;

    // Propiedad visual
    UPROPERTY(VisibleAnywhere, Category = "Nave")
    class UStaticMeshComponent* NaveMesh;

    // Propiedades de la lógica (Deben estar aquí para que el .cpp las reconozca)
    float VelocidadLineal;
    float VelocidadRotacion;
    float AmplitudOndulacion;
    float TiempoTranscurrido;
    float EscalaBase; // Para hacerla más grande
    int32 ModoMovimientoActual;

    // Declaración de los métodos de movimiento (Sin esto dan error los 'case')
    void EjecutarMovimientosLineales(float DeltaTime);
    void EjecutarMovimientosRotacionales(float DeltaTime);
    void EjecutarMovimientosComplejos(float DeltaTime);

public:
    virtual void Tick(float DeltaTime) override;
};