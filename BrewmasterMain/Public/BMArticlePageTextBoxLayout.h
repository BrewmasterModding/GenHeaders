#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BMArticlePageTextBoxLayout.generated.h"

USTRUCT(BlueprintType)
struct FBMArticlePageTextBoxLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector2D> TextBoxSizes;
    
    BREWMASTERMAIN_API FBMArticlePageTextBoxLayout();
};

