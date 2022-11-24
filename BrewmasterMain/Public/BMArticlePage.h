#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMArticlePageTextBoxLayout.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "EBMArticleType.h"
#include "BMArticlePage.generated.h"

class UBMArticleItem;
class UBMRichText;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMArticlePage : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMArticlePageTextBoxLayout> TextBoxLayouts;
    
public:
    UBMArticlePage();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCategoryName(const EBMArticleType ArticleType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RightPageSetUp(int32 ImageNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LeftPageSetUp(int32 ImageNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideQuarterlyLogo();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMArticleItem* GetTopRightPicture();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMArticleItem* GetTopLeftPicture();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetStartingRichTextBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMArticleItem* GetMiddleRightPicture();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMArticleItem* GetMiddleLeftPicture();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UBMRichText*> GetLinkedArticleTextBoxes();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMArticleItem* getBottomRightPicture();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMArticleItem* GetBottomLeftPicture();
    
};

