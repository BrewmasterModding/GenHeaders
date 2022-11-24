#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMPageIndex.generated.h"

class UBMIndexRecipe;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPageIndex : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMIndexRecipe> IndexRecipeCardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfIndexCategoriesPerPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfIndexRecipesPerPage;
    
public:
    UBMPageIndex();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION()
    void GoToPage(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetVerticalBox();
    
};

