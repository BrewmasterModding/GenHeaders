#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMComboBox.generated.h"

class UBMTextButtonWidget;
class UBMButton;
class UBMScrollBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMComboBox : public UBMUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionChanged, const FString&, SelectedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpened);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMTextButtonWidget> ButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OptionsOpen;
    
    UPROPERTY(BlueprintAssignable)
    FOnSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnOpened OnOpening;
    
public:
    UBMComboBox();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleOptions();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSelectedOptionText(const FText& Text);
    
    UFUNCTION()
    void SetSelectedOption(int32 I);
    
    UFUNCTION(BlueprintCallable)
    void SelectStringOption(const FString& SelectedOption);
    
    UFUNCTION(BlueprintCallable)
    void RefreshOptions();
    
    UFUNCTION(BlueprintCallable)
    void OpenComboBox();
    
    UFUNCTION(BlueprintCallable)
    FString GetSelectedOption();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedIndex();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMScrollBox* GetOptionsHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetOptionsBoxButton();
    
    UFUNCTION(BlueprintCallable)
    void DeleteOption(const FString& Option);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseOptions();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllOptions();
    
    UFUNCTION(BlueprintCallable)
    void AddOptionWithoutRebuild(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    void AddOption(const FString& Option);
    
};

