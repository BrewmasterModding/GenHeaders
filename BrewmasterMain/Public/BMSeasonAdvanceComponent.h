#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMSeasonAdvanceComponent.generated.h"

class UBMSeasonResultsScreen;
class UTweenContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMSeasonAdvanceComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkipChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTeleportPlayer;
    
    UPROPERTY(Instanced)
    UBMSeasonResultsScreen* SeasonResultsScreen;
    
public:
    UBMSeasonAdvanceComponent();
    UFUNCTION()
    void SeasonResultsFinished();
    
protected:
    UFUNCTION()
    void LevelUpScreen();
    
    UFUNCTION()
    void ConfirmAdvanceSeason();
    
    UFUNCTION()
    void CompleteFadeOutTween(UTweenContainer* TweenContainer);
    
    UFUNCTION()
    void CommercialSlotsResults();
    
    UFUNCTION()
    void CancelAdvanceSeason();
    
    UFUNCTION()
    void BackgroundFadeInComplete(UTweenContainer* TweenContainer);
    
    UFUNCTION()
    void AdvanceSeason();
    
    UFUNCTION()
    void AddCompetitionResultsBindings(UTweenContainer* TweenContainer);
    
};

