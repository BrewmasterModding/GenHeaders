#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMYeastIngredientData_ColonyRandomizationRanges.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMYeastIngredientData_ColonyRandomizationRanges : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float AttenuationAdjustMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float GrowthSugarsAdjustMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float LowerOptimalTemperatureRangeAdjustMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float UpperOptimalTemperatureRangeAdjustMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float CompleteHibernationTemperatureAdjustMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float CompleteDeathTemperatureAdjustMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float AlcoholToleranceAdjustMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float AlcoholDeathStartAdjustMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float AlcoholProductionAdjustMax;
    
    FBMYeastIngredientData_ColonyRandomizationRanges();
};

