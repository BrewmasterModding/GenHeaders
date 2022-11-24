#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMSafeZoneScale.generated.h"

class UScaleBox;
class USafeZoneSlot;
class USafeZone;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSafeZoneScale : public UUserWidget {
    GENERATED_BODY()
public:
    UBMSafeZoneScale();
    UFUNCTION(BlueprintImplementableEvent)
    UScaleBox* GetSlotBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    USafeZoneSlot* GetSafeZoneBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    USafeZone* GetSafeZone();
    
    UFUNCTION()
    void ApplySafeZone();
    
};

