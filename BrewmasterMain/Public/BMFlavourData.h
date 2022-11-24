#pragma once
#include "CoreMinimal.h"
#include "EFlavourNotes.h"
#include "EFlavourCategory.h"
#include "BMFlavourData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMFlavourData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EFlavourCategory, float> Flavor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EFlavourNotes, float> FlavourNotes;
    
    FBMFlavourData();
};

