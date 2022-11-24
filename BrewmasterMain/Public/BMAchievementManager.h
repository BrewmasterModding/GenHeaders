#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMSaveableActorInterface.h"
#include "BMPackagedBeerData.h"
#include "BMAchievementManager.generated.h"

UCLASS()
class BREWMASTERMAIN_API ABMAchievementManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    TMap<FName, float> AchievmentProgress;
    
    UPROPERTY(SaveGame)
    FBMPackagedBeerData BeerToCheckAchievement;
    
    UPROPERTY(SaveGame)
    TArray<FName> IncompleteBrewingAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> CompleteBrewingAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> IncompleteJobAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> CompleteJobAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> IncompleteCompetitionAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> CompleteCompetitionAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> IncompleteNarrativeAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> CompleteNarrativeAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> IncompleteItemUnlocksAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> CompleteItemUnlocksAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> IncompleteOtherAchievs;
    
    UPROPERTY(SaveGame)
    TArray<FName> CompleteOtherAchievs;
    
    UPROPERTY(SaveGame)
    bool bDisableAchievements;
    
    UPROPERTY()
    float CurrentTimeBetweenAchievementUpdates;
    
    UPROPERTY()
    float MinTimeBetweenAchievementUpdates;
    
    UPROPERTY()
    bool bAchievementUpdateQueued;
    
public:
    ABMAchievementManager();
    UFUNCTION(BlueprintCallable)
    void SetAchievementDisabled(bool bIsDisabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetAchievements();
    
protected:
    UFUNCTION()
    void AddAchievementToWritingQueue(const FName& AchievementName, const float& Progress);
    
    
    // Fix for true pure virtual functions not being implemented
};

