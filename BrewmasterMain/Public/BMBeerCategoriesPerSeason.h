#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMSeasonsEnum.h"
#include "EBMBeerCategory.h"
#include "BMBeerCategoriesPerSeason.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBeerCategoriesPerSeason : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMSeasonsEnum Season;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMBeerCategory> BeerCategories;
    
    FBMBeerCategoriesPerSeason();
};

