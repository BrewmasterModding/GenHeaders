#pragma once
#include "CoreMinimal.h"
#include "BMBookFunctionality.h"
#include "BMInputActionData.h"
#include "BMBrewersQuarterly.generated.h"

class UBMActionGlyph;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBrewersQuarterly : public UBMBookFunctionality {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData OpenShopAction;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxSubTitles;
    
public:
    UBMBrewersQuarterly();
protected:
    UFUNCTION()
    void OpenShop();
    
    UFUNCTION()
    void OpenBrewpedia();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBrewpediaButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetBackActionPromptGlyph();
    
};

