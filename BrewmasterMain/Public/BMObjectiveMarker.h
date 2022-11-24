#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMObjectiveMarker.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMObjectiveMarker : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMObjectiveMarker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArrowRotation(float Rotation);
    
};

