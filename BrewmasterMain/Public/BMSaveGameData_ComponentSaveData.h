#pragma once
#include "CoreMinimal.h"
#include "BMSaveGameData_ComponentSaveData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMSaveGameData_ComponentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ComponentClass;
    
    UPROPERTY(VisibleAnywhere)
    FName ComponentName;
    
    UPROPERTY(VisibleAnywhere)
    TArray<uint8> ComponentData;
    
    FBMSaveGameData_ComponentSaveData();
};

