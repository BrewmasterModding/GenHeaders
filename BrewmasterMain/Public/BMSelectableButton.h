#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BMSelectableButton.generated.h"

class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSelectableButton : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DefaultColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SelectedColour;
    
protected:
    UPROPERTY(Instanced)
    UBMButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ButtonIndex;
    
public:
    UBMSelectableButton();
    UFUNCTION(BlueprintImplementableEvent)
    void UnselectButton();
    
    UFUNCTION()
    void SetupSelectableButton(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButton();
    
};

