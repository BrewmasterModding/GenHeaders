#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "BMBulletTextItem.generated.h"

class UCheckBox;
class UBMCheckbox;
class UBMRecipeStat;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBulletTextItem : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsCompetition;
    
    UBMBulletTextItem();
    UFUNCTION(BlueprintImplementableEvent)
    void SwitchWidget(int32 widgetIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetUseLightTextColor(bool bUseLightText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRequirementText(const FText& RequirementText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRecipeNameText(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetQuestStoryLineText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJudgesPreference(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJournalRecipeOptionalText(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJournalRecipeItemName(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJournalRecipeItemAmount(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetArticleName(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetSubmitRecipeCheckBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRecipeStat* GetRecipeStatBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetQuestStoryCheckBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UCheckBox* GetJournalRecipeCheckBox();
    
};

