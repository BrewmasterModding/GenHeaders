#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EFlavourNotes.h"
#include "BMContaminationDebugWidget.generated.h"

class ABMDynamicContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMContaminationDebugWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMContaminationDebugWidget();
protected:
    UFUNCTION(BlueprintCallable)
    TMap<FString, FText> GetNegativeFlavourContaminationData(ABMDynamicContainer* ContainerRef, TArray<EFlavourNotes>& OutNegativeFlavourNotes);
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FText> GetContaminationData(ABMDynamicContainer* ContainerRef);
    
};

