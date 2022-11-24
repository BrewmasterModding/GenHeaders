#pragma once
#include "CoreMinimal.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
#include "BMIngredientData_ItemQuantityData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "BMDialogueBox.generated.h"

class UBMAudioAssetListBase;
class UCircularThrobber;
class UBMActionGlyph;
class UEditableText;
class UBMTextButtonWidget;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMDialogueBox : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText SliderUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxSliderDecimalPositions;
    
    UPROPERTY()
    bool bOverridePopupOpenAudio;
    
    UPROPERTY()
    bool bOverridePopupCloseAudio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData IncreaseIngredientAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData DecreaseIngredientyAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ScrollIngredientAmountAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ToggleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData InputAction;
    
    UPROPERTY()
    int32 MaxRetrieveAmount;
    
    UPROPERTY()
    int32 MinRetrieveAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Increments;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsIngredientDialogue;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY()
    TArray<FBMInputActionData> UnactiveActions;
    
public:
    UBMDialogueBox();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateIngredientAmountText(const FText& IngredientAmountText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetToggleText(const FText& NewToggleText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FText& NewTitleText);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetSliderDisplayValue(const FText& SliderDisplayValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSliderDetails(const FText& NewSliderText, const FText& SetSliderUnits, float SliderMin, float SliderMax, int32 SliderDecimalPositions);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRecipieText(const FText& NewRecipieText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMessageText(const FText& NewMessageText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInputField(const FText& NewToggleText);
    
    UFUNCTION(BlueprintCallable)
    void SetIngredientRetrievalAmounts(TArray<FBMIngredientData_ItemQuantityData> Amounts, FName UnitsKey);
    
    UFUNCTION(BlueprintCallable)
    void SetGenericDialogueText(const FText& NewTitleText, const FText& NewMessageText, const FText& NewRecipieText, const FText& NewToggleText, const FText& NewInputText, bool bShowCancelButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetConfirmDenyState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetConfirmButtonText(const FText& NewConfirmButtonText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBackButtonText(const FText& NewBackButtonText);
    
    UFUNCTION()
    void SetAmountToRetrieve(int32 Max, int32 Min);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideIngredientAmountText();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HideBackButton(bool IsHidden);
    
    UFUNCTION(BlueprintCallable)
    void HandleToggle();
    
    UFUNCTION(BlueprintCallable)
    void HandleInput();
    
    UFUNCTION(BlueprintCallable)
    void HandleIncreaseIngredient();
    
public:
    UFUNCTION()
    void HandleEditTextCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION()
    void HandleEditTextChanged(const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDecreaseIngredient();
    
public:
    UFUNCTION()
    void HandleConfirmButton();
    
    UFUNCTION()
    void HandleBackButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetToggleValue();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetToggleActionGlyph();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UEditableText* GetTextEdit();
    
    UFUNCTION(BlueprintImplementableEvent)
    UCircularThrobber* GetSpinner();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetInputActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIncreaseActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetDecreaseActionGlyph();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetConfirmTextButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetConfirmButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackTextButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBackButton();
    
protected:
    UFUNCTION()
    bool GetAudioAssetList();
    
    UFUNCTION(BlueprintCallable)
    void GenericIncreaseAmount();
    
    UFUNCTION(BlueprintCallable)
    void GenericDecreaseAmount();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FlipToggle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableInputText();
    
    UFUNCTION(BlueprintCallable)
    void CreateSliderDisplayValue(float SliderValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindEditTextField();
    
    UFUNCTION(BlueprintCallable)
    void BindConfirmButton();
    
    UFUNCTION(BlueprintCallable)
    void BindBackButton();
    
};

