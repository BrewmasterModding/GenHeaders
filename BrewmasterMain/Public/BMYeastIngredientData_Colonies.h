#pragma once
#include "CoreMinimal.h"
#include "BMYeastIngredientData_YeastColony.h"
#include "BMYeastIngredientData_Colonies.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMYeastIngredientData_Colonies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TMap<int32, FBMYeastIngredientData_YeastColony> ColonyIDMap;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float YeastActivity;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float AliveYeastPopulation;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float DormantYeastPopulation;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float ActiveYeastPopulation;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float CurrentDeadYeastWhileActive;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float PreviousAliveYeastPopulation;
    
    FBMYeastIngredientData_Colonies();
};

