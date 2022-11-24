#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMTastingDebugWidget.generated.h"

class UDataTable;
class ABMBaseBeerGlass;
class ABMBaseBeerBottle;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTastingDebugWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* BeerStyleDataTable;
    
protected:
    UPROPERTY()
    ABMBaseBeerGlass* BeerGlass;
    
    UPROPERTY()
    ABMBaseBeerBottle* BeerBottle;
    
public:
    UBMTastingDebugWidget();
    UFUNCTION(BlueprintCallable)
    void SetStyle(FName Style, bool Random);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomStyle();
    
    UFUNCTION(BlueprintCallable)
    void SetBeerGlass(ABMBaseBeerGlass* BeerGlassToUse);
    
    UFUNCTION(BlueprintCallable)
    void SetBeerBottle(ABMBaseBeerBottle* BeerBottleToUse);
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetSugarValue();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetStyleNames();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetProteinValue();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetMinSugarValue();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetMinProteinValue();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetMinDissolvedValue();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetMaxSugarValue();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetMaxProteinValue();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetMaxDissolvedValue();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetDissolvedValue();
    
};

