#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
#include "EBMPageType.h"
#include "BMBookPagesData.h"
#include "BMBookFunctionality.generated.h"

class UBMActionGlyph;
class UPanelWidget;
class UBMUserWidget;
class UBMJournalTab;
class UBMTextButtonWidget;
class USizeBox;
class UBMButton;
class UBMBooksNavigationBar;
class UBMResourceWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBookFunctionality : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMActionGlyph> TabActionGlyph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMPageType, TSubclassOf<UBMUserWidget>> WidgetForPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData AdditionalBackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData NextPageAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PreviousPageAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData NextSectionAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PreviousSectionAction;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMJournalTab> TabClass;
    
    UBMBookFunctionality();
protected:
    UFUNCTION()
    void StoryOverview(int32 PageNumber, FName CharacterPageNum);
    
public:
    UFUNCTION()
    void SetSection(int32 SectionNumber);
    
    UFUNCTION()
    void SetPage(int32 PageNumber);
    
protected:
    UFUNCTION()
    void PreviousSection();
    
    UFUNCTION()
    void PreviousPage();
    
    UFUNCTION()
    void PopulateRecipeRightPage(int32 PageNumber, FName RecipeID);
    
    UFUNCTION()
    void PopulateRecipeLeftPage(int32 PageNumber, FName RecipeID);
    
    UFUNCTION()
    void PopulateRecipeIndex(int32 PageNumber, const FString& CategoryStartIndex, int32 RecipePageIndex);
    
    UFUNCTION()
    void PopulatePage(int32 SectionNumber, FBMBookPagesData PageData, int32 PageNumber);
    
    UFUNCTION()
    void PopulateJobPage(int32 PageNumber, FName JobID);
    
    UFUNCTION()
    void PopulateCurrentTaskRight(int32 PageNumber);
    
    UFUNCTION()
    void PopulateCurrentTask(int32 PageNumber);
    
    UFUNCTION()
    void PopulateContentsPage(int32 PageNumber, int32 ContentsPageNumber);
    
    UFUNCTION()
    void PopulateCompetitionRightPage(int32 PageNumber);
    
    UFUNCTION()
    void PopulateCompetitionLeftPage(int32 PageNumber);
    
    UFUNCTION()
    void PopulateCommunityRightPage(int32 PageNumber, FName Brewery);
    
    UFUNCTION()
    void PopulateCommunityOverviewPage(int32 PageNumber, int32 BreweryStartIndex);
    
    UFUNCTION()
    void PopulateCommunityLeftPage(int32 PageNumber, FName Brewery);
    
    UFUNCTION()
    void PopulateCharacterRightPage(int32 PageNumber, FName Character);
    
    UFUNCTION()
    void PopulateCharacterLeftPage(int32 PageNumber, FName Character);
    
    UFUNCTION()
    void PopulateBeerCategories(int32 PageNumber, int32 CategoryStartIndex);
    
    UFUNCTION()
    void PopulateArticleStart(int32 PageNumber, FName Character, const FString& MainText, TArray<int32> ImageCaption);
    
    UFUNCTION()
    void PopulateArticle(int32 PageNumber, FName ArticleID, const FString& MainText, TArray<int32> ImageCaptions);
    
    UFUNCTION()
    void NextSection();
    
    UFUNCTION()
    void NextPage();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetTabHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetShopButton();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    USizeBox* GetRightPageHolder();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousSectionActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetPreviousPageButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousPageActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextSectionActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetNextPageButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextPageActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBooksNavigationBar* GetNavigationBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceWidget* GetMasteryWidget();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    USizeBox* GetLeftPageHolder();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceWidget* GetBrewTokensWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackTextButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBackButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetBackActionGlyph();
    
    UFUNCTION()
    void Back();
    
};

