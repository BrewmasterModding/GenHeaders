#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMInputActionData.h"
#include "BMSafezoneWidget.generated.h"

class UBMSafeZoneScale;
class UBMTextButtonWidget;
class UBMActionGlyph;
class USlider;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSafezoneWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ConfirmAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData IncreaseAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData DecreaseAction;
    
public:
    UBMSafezoneWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetScaleAmountText(const FText& Text);
    
    UFUNCTION()
    void SetSafeZone();
    
    UFUNCTION()
    void IncreaseScale();
    
    UFUNCTION(BlueprintImplementableEvent)
    USlider* GetSlider();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMSafeZoneScale* GetSafeZoneScale();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetIncreaseButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIncreaseAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetDecreaseButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetDecreaseAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetConfirmButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
    UFUNCTION()
    void DecreaseScale();
    
    UFUNCTION()
    void ChangedSafeZone(float NewNumber);
    
    UFUNCTION()
    void ApplySafeZone();
    
};

