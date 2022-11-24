#pragma once
#include "CoreMinimal.h"
#include "BMLabelMakerSetFloatWidget.h"
#include "EBM_HSV.h"
#include "BMColorSliderBase.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMColorSliderBase : public UBMLabelMakerSetFloatWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBM_HSV ColorSliderType;
    
    UBMColorSliderBase();
};

