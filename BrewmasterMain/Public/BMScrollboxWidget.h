#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMScrollboxWidget.generated.h"

class UNamedSlot;
class UBMScrollBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMScrollboxWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UBMScrollBox* ScrollBox;
    
    UPROPERTY(Instanced)
    UNamedSlot* ScrollboxNamedContentSlot;
    
public:
    UBMScrollboxWidget();
    UFUNCTION(BlueprintImplementableEvent)
    UNamedSlot* GetBMScrollboxNamedContentSlot();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMScrollBox* GetBMScrollbox();
    
};

