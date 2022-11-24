#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMBeerStyleMatch.h"
#include "BMBeerStyleItem.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBeerStyleItem : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMBeerStyleMatch MatchData;
    
    UBMBeerStyleItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStyleText(const FText& Style);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMatchPercentText(const FText& MatchPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetImage(int32 MatchNumber);
    
};

