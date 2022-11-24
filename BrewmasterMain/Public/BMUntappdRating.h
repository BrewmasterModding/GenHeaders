#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMUntappdRating.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMUntappdRating : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMUntappdRating();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetReviewText(const FText& Rating);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRatingsText(const FText& Rating);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCaps(int32 FullCaps, float Half);
    
};

