#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BMGenericIngredientData.h"
#include "BMItemData.h"
#include "BMItemStatStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMItemStatStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBMItemStatStatics();
    UFUNCTION(BlueprintPure)
    static FText GetItemCost(FName ItemId, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientYeastSpecies(FBMGenericIngredientData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientSubcategory(FBMGenericIngredientData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientStandardFlavours(FBMGenericIngredientData& ItemData, UObject* World, bool ListFlavours);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientProtein(FBMGenericIngredientData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientOrigin(FBMGenericIngredientData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientOptimalTemperatureRange(FBMGenericIngredientData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientFlavourNotes(FBMGenericIngredientData& ItemData, UObject* World, bool ListFlavours);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientEfficiency(FBMGenericIngredientData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientColorInfluence(FBMGenericIngredientData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientAttenuation(FBMGenericIngredientData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientAlphaAcidContent(FBMGenericIngredientData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetIngredientAlcoholTolerance(FBMGenericIngredientData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentWattage(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentVariableFlow(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentTap(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentSize(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentReversible(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentRequiredContainerSize(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentPourableInto(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentPourableFrom(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentLid(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentInsulation(FBMItemData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentHeatTolerant(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentFlowRate(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentCoolingRate(FBMItemData& ItemData, UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentCarbonationMethod(FBMItemData& ItemData);
    
    UFUNCTION(BlueprintPure)
    static FText GetEquipmentCapacity(FBMItemData& ItemData);
    
};

