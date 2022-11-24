#pragma once
#include "CoreMinimal.h"
#include "BMBeerStyleMatch.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameplayStatics -FallbackName=GameplayStatics
#include "BMBeerStyle.h"
#include "BMBeerProperties.h"
#include "EBeerStyleSpeciality.h"
#include "BMBeerMetaStatics.generated.h"

class ABMFixedData;
class UObject;

UCLASS()
class BREWMASTERMAIN_API UBMBeerMetaStatics : public UGameplayStatics {
    GENERATED_BODY()
public:
    UBMBeerMetaStatics();
    UFUNCTION(BlueprintPure)
    static FString GetStyleMatchDebugString(const FBMBeerStyleMatch& BeerStyleMatch);
    
    UFUNCTION(BlueprintPure)
    static void GetPossibleMatchingStyles(TArray<FBMBeerStyleMatch>& MatchingStyles, const TArray<FBMBeerStyle>& AllStyles, const FBMBeerProperties& BeerProperties, ABMFixedData* BrewFixedData, const int32 MinStatPoints, const int32 MaxToReturn);
    
    UFUNCTION(BlueprintPure)
    static void GetPossibleBeerSpecialities(TArray<EBeerStyleSpeciality>& MatchingSpecialities, const FBMBeerProperties& BeerProperties, ABMFixedData* FixedDataManager);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FBMBeerStyle GetBeerStyleData(const FName StyleID, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FBMBeerProperties GetBeerPropertiesForStyleFromBP(FBMBeerStyle BeerStyle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FBMBeerProperties GetBeerPropertiesForStyle(const FName StyleID, UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool DoesStyleMatchRecipe(FBMBeerStyleMatch StyleMatch, UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool DoesStyleMatchActivity(FBMBeerStyleMatch StyleMatch, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool DoesBeerMeetRequiredCriteria(const FBMBeerStyle& StyleToMatch, const FBMBeerProperties& BeerProperties, ABMFixedData* BrewFixedData, TArray<FString>& MatchingStats, TArray<FString>& NonMatchingStats);
    
};

