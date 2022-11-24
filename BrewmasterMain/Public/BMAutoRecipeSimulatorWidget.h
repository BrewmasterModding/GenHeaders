#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMRecipeData.h"
#include "BMAutoRecipeSimulatorWidget.generated.h"

class UDataTable;
class ABMAutoRecipeSimulator;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMAutoRecipeSimulatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* Equipment_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* Recipe_DT;
    
protected:
    UPROPERTY()
    ABMAutoRecipeSimulator* RecipeSimulator;
    
public:
    UBMAutoRecipeSimulatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetSimulatedRecipe(FBMRecipeData Recipe);
    
    UFUNCTION(BlueprintCallable)
    ABMAutoRecipeSimulator* GetRecipeSimulator();
    
    UFUNCTION(BlueprintCallable)
    void BeginSimulation();
    
};

