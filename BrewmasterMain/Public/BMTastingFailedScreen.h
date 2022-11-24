#pragma once
#include "CoreMinimal.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
#include "BMTastingFailedScreen.generated.h"

class UBMButton;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTastingFailedScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ContinueAction;
    
    UBMTastingFailedScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void SetReasonText(const FText& Reason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFailureText(const FText& Failed);
    
    UFUNCTION(BlueprintCallable)
    void SetData();
    
protected:
    UFUNCTION()
    void ReturnToGame();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetContinueButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetContinueActionGlyph();
    
};

