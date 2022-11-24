#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMObjectiveList.generated.h"

class UBMHUDObjective;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMObjectiveList : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMHUDObjective> ObjectiveClass;
    
    UPROPERTY(BlueprintReadWrite)
    bool bHasCurrentObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowEmptyObjectiveListMessage;
    
public:
    UBMObjectiveList();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShouldShowEmptyObjectiveListMessage(bool bNew);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjectiveListVisibility(bool bHasObjectives);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetObjectiveListTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetObjectiveHolder();
    
};

