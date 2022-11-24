#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMBasicRichText.generated.h"

class UBMRichText;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBasicRichText : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMRichText* Text;
    
public:
    UBMBasicRichText();
    UFUNCTION(BlueprintCallable)
    void SetRichText(FText InText);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetRichText();
    
};

