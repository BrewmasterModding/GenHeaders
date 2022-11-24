#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMSaveDetails.generated.h"

class UBMResourceSystem;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSaveDetails : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMSaveDetails();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSaveNameText(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSaveGameTypeText(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPinnedRecipeNameText(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLastBeerCreatedText(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetActivityNameText(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResourcePanel();
    
};

