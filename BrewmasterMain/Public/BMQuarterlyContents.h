#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMQuarterlyContents.generated.h"

class UBMContentList;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMQuarterlyContents : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxPageTitles;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMContentList> ContentListClass;
    
public:
    UBMQuarterlyContents();
    UFUNCTION()
    void GoToPage(int32 PageNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMContentList* GetRecipesBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMContentList* GetJobsBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMContentList* GetCompetitionBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMContentList* GetArticlesBox();
    
};

