#pragma once
#include "CoreMinimal.h"
#include "EBMLabelTextSlot.h"
#include "BMLabelMakerValueWidget.h"
#include "BMLabelTextData.h"
#include "BMLabelTextStyleWidget.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMLabelTextStyleWidget : public UBMLabelMakerValueWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EBMLabelTextSlot LabelTextType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FBMLabelTextData LabelTextData;
    
public:
    UBMLabelTextStyleWidget();
    UFUNCTION(BlueprintNativeEvent)
    void ShowTextStyleOption(EBMLabelTextSlot inTextType, FBMLabelTextData inTextData);
    
protected:
    UFUNCTION()
    void OnTextStyleButtonPressed();
    
};

