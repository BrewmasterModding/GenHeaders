#include "BMBeerMetaStatics.h"

class ABMFixedData;
class UObject;

FString UBMBeerMetaStatics::GetStyleMatchDebugString(const FBMBeerStyleMatch& BeerStyleMatch) {
    return TEXT("");
}

void UBMBeerMetaStatics::GetPossibleMatchingStyles(TArray<FBMBeerStyleMatch>& MatchingStyles, const TArray<FBMBeerStyle>& AllStyles, const FBMBeerProperties& BeerProperties, ABMFixedData* BrewFixedData, const int32 MinStatPoints, const int32 MaxToReturn) {
}

void UBMBeerMetaStatics::GetPossibleBeerSpecialities(TArray<EBeerStyleSpeciality>& MatchingSpecialities, const FBMBeerProperties& BeerProperties, ABMFixedData* FixedDataManager) {
}

FBMBeerStyle UBMBeerMetaStatics::GetBeerStyleData(const FName StyleID, UObject* WorldContextObject) {
    return FBMBeerStyle{};
}

FBMBeerProperties UBMBeerMetaStatics::GetBeerPropertiesForStyleFromBP(FBMBeerStyle BeerStyle) {
    return FBMBeerProperties{};
}

FBMBeerProperties UBMBeerMetaStatics::GetBeerPropertiesForStyle(const FName StyleID, UObject* WorldContextObject) {
    return FBMBeerProperties{};
}

bool UBMBeerMetaStatics::DoesStyleMatchRecipe(FBMBeerStyleMatch StyleMatch, UObject* WorldContextObject) {
    return false;
}

bool UBMBeerMetaStatics::DoesStyleMatchActivity(FBMBeerStyleMatch StyleMatch, UObject* WorldContextObject) {
    return false;
}

bool UBMBeerMetaStatics::DoesBeerMeetRequiredCriteria(const FBMBeerStyle& StyleToMatch, const FBMBeerProperties& BeerProperties, ABMFixedData* BrewFixedData, TArray<FString>& MatchingStats, TArray<FString>& NonMatchingStats) {
    return false;
}

UBMBeerMetaStatics::UBMBeerMetaStatics() {
}

