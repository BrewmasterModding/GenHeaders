#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMInputActionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMXboxAccountWidget.generated.h"

class UBMButton;
class UBMHUDActionPrompt;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMXboxAccountWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UBMButton* SwitchAccountButton;
    
    UPROPERTY(Instanced)
    UBMHUDActionPrompt* SwitchAccountPrompt;
    
    UPROPERTY(Instanced)
    UBMActionGlyph* SwitchAccountGlyph;
    
    UPROPERTY()
    FBMInputActionData AccountSwitchAction;
    
public:
    UBMXboxAccountWidget();
    UFUNCTION()
    void SetupXboxAccountWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccountNameText(const FText& AccountName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAccountAvatar(const FSlateBrush& AccountAvatar);
    
    UFUNCTION()
    void OpenExternalAccountPicker();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetSwitchAccountButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetSwitchAccountActionPrompt();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetSwitchAccountActionGlyph();
    
    UFUNCTION()
    void GetAccountNameFromInstance();
    
};

