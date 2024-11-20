#include "WavFileSender.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

// Sets default values
AWavFileSender::AWavFileSender()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWavFileSender::BeginPlay()
{
    Super::BeginPlay();
    SendWavFileToAPI(TEXT("C:/Users/kevin/OneDrive/Documents/Unreal Projects/MyProject/Saved/BouncedWavFiles/recording.wav"));
}

// Called every frame
void AWavFileSender::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AWavFileSender::SendWavFileToAPI(const FString& FilePath)
{
    // Read the file into a byte array
    TArray<uint8> FileData;
    bool bSuccess = FFileHelper::LoadFileToArray(FileData, *FilePath);

    if (bSuccess)
    {
        // Prepare the request
        TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
        HttpRequest->SetURL(TEXT("http://localhost:8000/transcribe/"));  
        HttpRequest->SetVerb(TEXT("POST"));
        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/octet-stream"));

        // Set the file data (byte array) as the content
        HttpRequest->SetContent(FileData);

        // Bind the response callback (optional)
        HttpRequest->OnProcessRequestComplete().BindUObject(this, &AWavFileSender::OnRequestComplete);

        // Send the request
        HttpRequest->ProcessRequest();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to read file!"));
    }
}

void AWavFileSender::OnRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (bWasSuccessful)
    {
        FString ResponseString = Response->GetContentAsString();
        UE_LOG(LogTemp, Log, TEXT("Response: %s"), *ResponseString);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Request failed"));
    }
}
