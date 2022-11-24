#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMBrewpediaContentsPage.generated.h"

class UBMContentList;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBrewpediaContentsPage : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxPageTitles;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMContentList> ContentListClass;
    
public:
    UBMBrewpediaContentsPage();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsLeftPage(bool bIsLeftPage);
    
    UFUNCTION()
    void GoToPage(int32 PageNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetVerticalBoxHolder();
    
};

