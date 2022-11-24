#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMRecipeStageBoxWidget.generated.h"

class UVerticalBox;
class UBMRichText;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeStageBoxWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UVerticalBox* VerticalBox;
    
    UPROPERTY(Instanced)
    UBMRichText* StageText;
    
public:
    UBMRecipeStageBoxWidget();
    UFUNCTION()
    void SetStageText(const FString& InText);
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetVerticalBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetStageText();
    
};

