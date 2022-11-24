#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMSeasonsEnum.h"
#include "BMQuarterlyCoversData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMQuarterlyCoversData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString CoverID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<EBMSeasonsEnum> SeasonsValidIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName BeerStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TSoftObjectPtr<UTexture2D> CoverAsset;
    
    FBMQuarterlyCoversData();
};

