#pragma once
#include "CoreMinimal.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
#include "ARSaveWorldPinDelegate.h"
#include "ARSaveWorldAsyncTaskBlueprintProxy.generated.h"

class UObject;
class UARSaveWorldAsyncTaskBlueprintProxy;

UCLASS()
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FARSaveWorldPin OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FARSaveWorldPin OnFailed;
    
    UARSaveWorldAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);
    
};

