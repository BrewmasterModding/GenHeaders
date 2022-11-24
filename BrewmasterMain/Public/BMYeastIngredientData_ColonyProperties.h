#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EYeastType.h"
#include "BMYeastIngredientData_ColonyProperties.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMYeastIngredientData_ColonyProperties : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName SugarTypeCreated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float GrowthRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float FermentationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float BackgroundMortalityFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float MortalityRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float GrowthSugars;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float AvailableSugarsHibernationThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float Attenuation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float MaxColonySize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float LowerOptimalTemperatureRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float UpperOptimalTemperatureRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float CompleteHibernationTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float CompleteDeathTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float LagTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float AlcoholTolerance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float AlcoholDeathStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float AlcoholProduction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EYeastType YeastType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    UCurveFloat* TemperatureDeathCurve;
    
    FBMYeastIngredientData_ColonyProperties();
};

