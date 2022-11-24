#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "BMArticleFirstPageLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FBMArticleFirstPageLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArticleImageFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D BeerStyleImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D HistoryTextBoxSizeWithoutRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D HistoryTextBoxMaximumSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlateVisibility RecipeListVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlateVisibility SummaryTextVisibility;
    
    BREWMASTERMAIN_API FBMArticleFirstPageLayoutInfo();
};

