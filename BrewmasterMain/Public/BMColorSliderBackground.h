#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EBM_HSV.h"
#include "BMColorSliderBackground.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMColorSliderBackground : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBM_HSV ColorSliderType;
    
    UPROPERTY(EditAnywhere)
    FLinearColor CurrentColourHSV;
    
public:
    UBMColorSliderBackground();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentColour(FLinearColor inColour);
    
    UFUNCTION(BlueprintCallable)
    void SetType(EBM_HSV InType);
    
};

