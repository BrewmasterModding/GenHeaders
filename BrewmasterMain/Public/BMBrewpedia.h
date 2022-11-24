#pragma once
#include "CoreMinimal.h"
#include "BMBookFunctionality.h"
#include "BMBrewpedia.generated.h"

class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBrewpedia : public UBMBookFunctionality {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxSubTitles;
    
public:
    UBMBrewpedia();
protected:
    UFUNCTION()
    void OpenBrewersQuarterly();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBrewersQuarterly();
    
};

