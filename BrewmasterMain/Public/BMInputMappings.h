#pragma once
#include "CoreMinimal.h"
#include "EBMInputSet.h"
#include "EBMInput.h"
#include "EBMInputPressType.h"
#include "BMInputMappings.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMInputMappings {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    EBMInput Input;
    
    UPROPERTY(Config)
    int32 IDNumber;
    
    UPROPERTY(Config)
    EBMInputSet InputSet;
    
    UPROPERTY(Config)
    bool bIsController;
    
    UPROPERTY(Config)
    bool bIsAlternative;
    
    UPROPERTY(Config)
    bool bIsMultiButton;
    
    UPROPERTY(Config)
    FName InputKey;
    
    UPROPERTY(Config)
    EBMInputPressType PressType;
    
    UPROPERTY(Config)
    bool bIsActionHoldPress;
    
    UPROPERTY(Config)
    float AxisScale;
    
    FBMInputMappings();
};

