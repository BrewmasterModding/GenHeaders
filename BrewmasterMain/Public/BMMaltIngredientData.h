#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMSugarEnzymeStructData.h"
#include "BMMaltIngredientData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMMaltIngredientData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName IngredientName;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    bool bIsExtract;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    bool bIsSeepable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float StarchPercentUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMSugarEnzymeStructData FermentableSugarEnzymeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMSugarEnzymeStructData UnfermentableSugarEnzymeData;
    
    FBMMaltIngredientData();
};

