#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMTopLevelWidget.h"
#include "EBMParamControlType.h"
#include "BMPackagingScreen.generated.h"

class UBMDialogueBox;
class UBMPackagingMenu;
class ALevelSequenceActor;
class UBMSubScreenMenu;
class UBMLabelMakerValueWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPackagingScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    ALevelSequenceActor* LabelMakerExitLevelActor;
    
protected:
    UPROPERTY(Instanced)
    UBMPackagingMenu* MainMenu;
    
    UPROPERTY(Instanced)
    UBMSubScreenMenu* SubMenu;
    
    UPROPERTY()
    ALevelSequenceActor* FinishedPackagingLevelActor;
    
    UPROPERTY(EditAnywhere)
    TMap<EBMParamControlType, TSubclassOf<UBMLabelMakerValueWidget>> ParamEditWidgetClasses;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBMLabelMakerValueWidget> ParamPreviewWidgetClass;
    
    UPROPERTY(Instanced)
    UBMDialogueBox* WarningDialogue;
    
public:
    UBMPackagingScreen();
    UFUNCTION()
    UBMPackagingMenu* SwitchToMainMenu();
    
    UFUNCTION()
    void OpenMainMenu();
    
protected:
    UFUNCTION()
    void OpenJobOverlay();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMSubScreenMenu* GetSubMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMPackagingMenu* GetMainMenu();
    
};

