#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMMastery.h"
#include "BMPageOverview.generated.h"

class UBMObjectiveSystem;
class USlider;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPageOverview : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMPageOverview();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetMasteryTotals(const FText& Totals);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEmptyJobsSection();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentMasteryText(const FText& Current);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentLevel(EBMMastery MasteryLevel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NextMasteryText(const FText& Next);
    
    UFUNCTION()
    void NarrativeButtonIndex(int32 Index);
    
    UFUNCTION()
    void JobsButtonIndex(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMObjectiveSystem* GetStoryObjectives();
    
    UFUNCTION(BlueprintImplementableEvent)
    USlider* GetMasteryLevelUpBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMObjectiveSystem* GetJobObjectives();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EmptyStorySection();
    
};

