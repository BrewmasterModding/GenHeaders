#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMPackagingSubScreenOptions.h"
#include "BMEditableParamSet.h"
#include "BMPackagingSubScreenList.generated.h"

class UBMDialogueBox;
class UScrollBox;
class UBMPackagingSubScreenButton;
class UVerticalBox;
class UUserWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPackagingSubScreenList : public UBMPackagingSubScreenOptions {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMPackagingSubScreenButton> ButtonClass;
    
    UPROPERTY(Instanced)
    TArray<UUserWidget*> SpawnedListItems;
    
    UPROPERTY()
    TArray<FName> OrderedCategories;
    
    UPROPERTY()
    FBMEditableParamSet CurrentParamSet;
    
    UPROPERTY()
    TMap<FName, FBMEditableParamSet> EditableLabelParameters;
    
    UPROPERTY(Instanced)
    UBMDialogueBox* WarningDialogue;
    
public:
    UBMPackagingSubScreenList();
protected:
    UFUNCTION()
    void SetInformationFromSelected();
    
    UFUNCTION()
    void OnNewLabelPressed();
    
    UFUNCTION()
    void OnNewLabelDialogueConfirmed();
    
public:
    UFUNCTION()
    void OnConfirmInput();
    
protected:
    UFUNCTION()
    void GoToParamSubMenuFromIndex(int32 inIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetVerticalBox();
    
};

