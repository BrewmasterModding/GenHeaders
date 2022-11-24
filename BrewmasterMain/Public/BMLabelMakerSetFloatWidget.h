#pragma once
#include "CoreMinimal.h"
#include "BMLabelMakerValueWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "BMInputActionData.h"
#include "BMLabelMakerSetFloatWidget.generated.h"

class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMLabelMakerSetFloatWidget : public UBMLabelMakerValueWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float ParamValue;
    
    UPROPERTY(BlueprintReadWrite)
    float TimeForRepeatCalls;
    
    UPROPERTY()
    FTimerHandle InputCheckTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData IncreaseAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData DecreaseAction;
    
public:
    UBMLabelMakerSetFloatWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitFloatSetWidget(FName inParamID, float InParam);
    
    UFUNCTION(BlueprintImplementableEvent)
    void IncreaseBindingCall();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetIncreaseActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetDecreaseActionGlyph();
    
    UFUNCTION(BlueprintCallable)
    void EnableBindings();
    
    UFUNCTION(BlueprintCallable)
    void DisableBindings();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecreaseBindingCall();
    
    UFUNCTION()
    void CheckHeldInput();
    
    UFUNCTION()
    void AllowHeldInput();
    
};

