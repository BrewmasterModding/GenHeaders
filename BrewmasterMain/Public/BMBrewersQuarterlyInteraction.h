#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "EBMSeasonsEnum.h"
#include "BMBrewersQuarterlyInteraction.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMBrewersQuarterlyInteraction : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UBMBrewersQuarterlyInteraction();
    UFUNCTION()
    void SeasonChanged(EBMSeasonsEnum CurrentSeason);
    
    UFUNCTION()
    void OpenScreen();
    
    UFUNCTION()
    void CloseQuarterlyCover();
    
    UFUNCTION()
    void CheckBindings();
    
};

