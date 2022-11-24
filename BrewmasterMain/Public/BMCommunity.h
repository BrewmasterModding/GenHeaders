#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMCommunity.generated.h"

class UBMBreweryOverview;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCommunity : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    int32 NumBreweriesPerPage;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMBreweryOverview> BreweryOverviewClass;
    
public:
    UBMCommunity();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetCommunityBreweriesTitle(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetVerticalBox();
    
};

