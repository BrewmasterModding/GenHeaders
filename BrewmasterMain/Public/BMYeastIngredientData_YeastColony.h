#pragma once
#include "CoreMinimal.h"
#include "BMYeastIngredientData_ColonyProperties.h"
#include "BMYeastIngredientData_YeastColony.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMYeastIngredientData_YeastColony {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FBMYeastIngredientData_ColonyProperties ColonyProperties;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float ColonySizePercentage;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float ColonyAge;
    
    FBMYeastIngredientData_YeastColony();
};

