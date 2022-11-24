#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "BMArticlePageTextBoxLayoutAsIntPoint.generated.h"

USTRUCT(BlueprintType)
struct FBMArticlePageTextBoxLayoutAsIntPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIntPoint> TextBoxSizes;
    
    BREWMASTERMAIN_API FBMArticlePageTextBoxLayoutAsIntPoint();
};

