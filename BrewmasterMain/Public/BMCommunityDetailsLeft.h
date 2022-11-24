#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMCommunityDetailsLeft.generated.h"

class UBMBreweryDetails;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCommunityDetailsLeft : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMCommunityDetailsLeft();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryTitle(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryName(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryDesc(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryCardHereText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBiography(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBreweryDetails* GetBreweryDetailsCard();
    
};

