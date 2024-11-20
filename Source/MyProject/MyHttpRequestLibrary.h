#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HttpModule.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"
#include "Json.h"
#include "MyHttpRequestLibrary.generated.h"

UCLASS()
class MYPROJECT_API UMyHttpRequestLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "MyHttpRequests")
    static void SendWavToEndpointAndDisplayFactCheck();
};