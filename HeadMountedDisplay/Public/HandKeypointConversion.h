#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EHandKeypoint.h"
#include "HandKeypointConversion.generated.h"

UCLASS(BlueprintType)
class HEADMOUNTEDDISPLAY_API UHandKeypointConversion : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHandKeypointConversion();
    UFUNCTION(BlueprintPure)
    static int32 Conv_HandKeypointToInt32(EHandKeypoint Input);
    
};

