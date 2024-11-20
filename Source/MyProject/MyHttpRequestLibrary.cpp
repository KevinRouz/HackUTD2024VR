#include "MyHttpRequestLibrary.h"
#include "Engine/Engine.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

void UMyHttpRequestLibrary::SendWavToEndpointAndDisplayFactCheck()
{
    // Prepare the HTTP Request
    FString FilePath = TEXT("C:\\Users\\kevin\\OneDrive\\Documents\\Unreal Projects\\MyProject\\Saved\\BouncedWavFiles\\recording.wav");

    // Create an HTTP request and configure it
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL(TEXT("http://127.0.0.1:8000/transcribe/"));
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/octet-stream"));
    HttpRequest->SetHeader(TEXT("Accept"), TEXT("application/json"));

    // Read the WAV file into a byte array
    TArray<uint8> FileData;
    FFileHelper::LoadFileToArray(FileData, *FilePath);

    HttpRequest->SetContent(FileData);

    // Bind the callback function for when the request completes
    HttpRequest->OnProcessRequestComplete().BindLambda([](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (bWasSuccessful && Response.IsValid())
            {
                // Parse the JSON response
                TSharedPtr<FJsonObject> JsonResponse;
                TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());

                if (FJsonSerializer::Deserialize(JsonReader, JsonResponse))
                {
                    // Extract "fact check" value from the response
                    FString FactCheckText = JsonResponse->GetStringField(TEXT("fact check"));

                    // Display the text on HUD for 6 seconds
                    if (GEngine)
                    {
                        GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, FactCheckText);
                    }
                }
            }
            else
            {
                // Handle failure
                if (GEngine)
                {
                    GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Red, TEXT("Failed to contact endpoint."));
                }
            }
        });

    // Send the request
    HttpRequest->ProcessRequest();
}
