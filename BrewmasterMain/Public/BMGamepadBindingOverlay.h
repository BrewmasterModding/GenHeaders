#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
#include "EBMInputSet.h"
#include "EBMInput.h"
#include "EBMInputPressType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
#include "BMGamepadBindingOverlay.generated.h"

class UBMButton;
class UBMRichText;
class UImage;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMGamepadBindingOverlay : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMButton* BackButton;
    
    UPROPERTY(Instanced)
    UBMButton* ConfirmButton;
    
    UPROPERTY(Instanced)
    UBMButton* RecordBindingButton;
    
    UPROPERTY(Instanced)
    UBMButton* ButtonIncrease;
    
    UPROPERTY(Instanced)
    UBMButton* ButtonDecrease;
    
    UPROPERTY(Instanced)
    UBMRichText* PressTypeText;
    
    UPROPERTY(Instanced)
    UBMRichText* BindingValidationText;
    
    UPROPERTY(Instanced)
    UBMRichText* ActionTitleText;
    
    UPROPERTY(Instanced)
    UBMRichText* TwoButtonWarningText;
    
    UPROPERTY(Instanced)
    UImage* CurrentPlusImage;
    
    UPROPERTY(Instanced)
    UImage* NewPlusImage;
    
public:
    UBMGamepadBindingOverlay();
    UFUNCTION()
    void SetupBindingOverlay();
    
    UFUNCTION()
    void SetNewInput(int32 IndexToSet, FKeyEvent InKeyEvent);
    
    UFUNCTION()
    void SetCurrentInputs(EBMInput InputAction, EBMInputSet InputSet, EBMInputPressType PressType, int32 FirstIndex, int32 SecondIndex, bool Multi);
    
    UFUNCTION()
    void IncreaseButtonPressType();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetTwoButtonWarningText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetRecordBindingButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetPressTypeText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNewSecondGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetNewPlusImage();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNewFirstGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetCurrentSecondGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetCurrentPlusImage();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetCurrentFirstGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetConfirmButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButtonIncrease();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButtonDecrease();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetBindingValidationText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBackButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetActionTitleText();
    
    UFUNCTION()
    void DecreaseButtonPressType();
    
protected:
    UFUNCTION()
    void ConfirmNewBindings();
    
public:
    UFUNCTION()
    void CloseBindingOverlay();
    
    UFUNCTION(BlueprintCallable)
    bool ButtonReleased(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    bool ButtonPressed(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
};

