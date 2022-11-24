#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMGenericIngredientData.h"
#include "BMUserWidget.h"
#include "BMItemData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMPinnedRecipeIngredientBar.generated.h"

class UGridPanel;
class UBMPinnedRecipeIngrediantGrid;
class UBMRichText;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPinnedRecipeIngredientBar : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UBMPinnedRecipeIngrediantGrid*> IngredientGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GridColumnMax;
    
protected:
    UPROPERTY(Instanced)
    UBMRichText* SectionText;
    
    UPROPERTY(Instanced)
    UGridPanel* GridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMPinnedRecipeIngrediantGrid> PinnedRecipeIngredientGridBP;
    
public:
    UBMPinnedRecipeIngredientBar();
    UFUNCTION()
    void SetSectionName(const FString& Name);
    
    UFUNCTION()
    void LoadReferences();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetSectionText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UGridPanel* GetGridPanel();
    
    UFUNCTION()
    void ClearGrids();
    
    UFUNCTION()
    void AddNewGrid(const FString& GridName, FSlateBrush IconBrush, int32 Amount, bool Owned, bool Ingredient, FBMItemData ItemData, FBMGenericIngredientData IngredientData);
    
};

