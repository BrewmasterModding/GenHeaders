#pragma once
#include "CoreMinimal.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
#include "BMTastingSequenceScreen.generated.h"

class ALevelSequenceActor;
class UBMActionGlyph;
class UBMTextButtonWidget;
class UBMBaseTastingSubScreen;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTastingSequenceScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData SkipAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData SkipAllAction;
    
    UPROPERTY(BlueprintReadOnly)
    bool bFullSwitchingEnabled;
    
    UPROPERTY()
    ALevelSequenceActor* CurrentSequenceActor;
    
public:
    UBMTastingSequenceScreen();
    UFUNCTION()
    void SkipAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowTastingScreen();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowSkipAll(bool bShowSkipAll);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowSkip(bool bShowSkip);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetFocusedWidget(int32 WidgetNo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAllAnimationsSeen();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBaseTastingSubScreen* GetTastingSubscreen();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetSkipWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetSkipButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetSkipAllActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetSkipActionGlyph();
    
    UFUNCTION()
    void BindSkip();
    
    UFUNCTION()
    void BindAllSkip();
    
};

