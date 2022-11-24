#pragma once
#include "CoreMinimal.h"
#include "BMTopLevelWidget.h"
#include "BMQuarterlyCover.generated.h"

class UTexture2D;
class UBMBulletList;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMQuarterlyCover : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UBMQuarterlyCover();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowPromptGlyph();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowItemsToBuy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCompetition();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSeasonText(const FText& SeasonText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetQuarterlyCover(UTexture2D* Cover);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemToBuyText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompetitionTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompetitionText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideItemsToBuy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideCompetition();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBulletList* GetRecipeList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBulletList* GetJobList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetContinueActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBulletList* GetArticleList();
    
    UFUNCTION()
    void CultureChanged();
    
};

