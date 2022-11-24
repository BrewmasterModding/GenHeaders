#pragma once
#include "CoreMinimal.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
#include "BMSeasonResultsScreen.generated.h"

class UTweenContainer;
class UBMSeasonAdvanceComponent;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSeasonResultsScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UPROPERTY(Instanced)
    UBMSeasonAdvanceComponent* SeasonsAdvancedComp;
    
    UPROPERTY()
    FBMInputActionData SkipAllAction;
    
    UPROPERTY()
    FBMInputActionData SkipCurrentAction;
    
public:
    UBMSeasonResultsScreen();
    UFUNCTION()
    void SkipCurrentTweenContainer();
    
    UFUNCTION()
    void SkipAllCards();
    
};

