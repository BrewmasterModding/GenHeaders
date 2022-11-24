#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMInputActionData.h"
#include "OnCarouselValueChangedDelegate.h"
#include "EBMOptionType.h"
#include "BMOptionWidget.generated.h"

class UCheckBox;
class UBMRichText;
class UBMActionGlyph;
class USlider;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMOptionWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnCarouselValueChanged CarouselValueChange;
    
protected:
    UPROPERTY(Instanced)
    UBMRichText* OptionText;
    
    UPROPERTY(Instanced)
    UCheckBox* OptionCheckBox;
    
    UPROPERTY(Instanced)
    USlider* OptionSlider;
    
    UPROPERTY(Instanced)
    UBMButton* IncreaseButton;
    
    UPROPERTY(Instanced)
    UBMButton* DecreaseButton;
    
    UPROPERTY(Instanced)
    UBMRichText* ValueText;
    
    UPROPERTY(Instanced)
    UBMActionGlyph* IncreaseGlyph;
    
    UPROPERTY(Instanced)
    UBMActionGlyph* DecreaseGlyph;
    
    UPROPERTY(Instanced)
    UBMActionGlyph* ToggleGlyph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData IncreaseAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData DecreaseAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ToggleAction;
    
public:
    UBMOptionWidget();
    UFUNCTION()
    void UpdateSliderValueText(float Value);
    
    UFUNCTION(BlueprintCallable)
    void UnbindActionPrompts();
    
    UFUNCTION()
    void SkipTutorialConfirmed();
    
    UFUNCTION()
    void SetOptionData(const FString& Name, EBMOptionType Type, bool Restart);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBackgroundStyle(bool bIsEvenEntry);
    
    UFUNCTION()
    void ResetContextualTips();
    
    UFUNCTION()
    void OpenSkipTutorialScreen();
    
    UFUNCTION()
    void OpenSafeArea();
    
    UFUNCTION()
    void OpenResetContextualTipsScreen();
    
    UFUNCTION()
    void OpenKeyboardBindingScreen();
    
    UFUNCTION()
    void OpenControllerBindingScreen();
    
    UFUNCTION()
    void IncreaseOption();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetValueText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetToggleGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetOptionText();
    
    UFUNCTION(BlueprintImplementableEvent)
    USlider* GetOptionSlider();
    
    UFUNCTION(BlueprintImplementableEvent)
    UCheckBox* GetOptionCheckBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetOptionButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIncreaseGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetIncreaseButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetDecreaseGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetDecreaseButton();
    
    UFUNCTION()
    void DecreaseOption();
    
    UFUNCTION(BlueprintCallable)
    void ChangeToggleState();
    
    UFUNCTION()
    void BindIntValue(const FString& FunctionName, int32 Min, int32 Max, int32 CurrentValue, bool UseDefaultString);
    
    UFUNCTION()
    void BindFloatValue(const FString& FunctionName, float Min, float Max, float CurrentValue, float SliderAmount);
    
    UFUNCTION()
    void BindButton(const FString& FunctionName);
    
    UFUNCTION()
    void BindBooleanValue(const FString& FunctionName, bool CurrentValue);
    
    UFUNCTION(BlueprintCallable)
    void BindActionPrompts();
    
};

