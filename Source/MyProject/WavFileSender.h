#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WavFileSender.generated.h"

UCLASS()
class API AWavFileSender : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AWavFileSender();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    void SendWavFileToAPI(const FString& FilePath);

private:
    void OnRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
