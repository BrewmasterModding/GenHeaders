#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMWDifficulty.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWDifficulty : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMWDifficulty();
    UFUNCTION(BlueprintImplementableEvent)
    void SetDifficultyText(const FText& DifficultyText);
    
};

