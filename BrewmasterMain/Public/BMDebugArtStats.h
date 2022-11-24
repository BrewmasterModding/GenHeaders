#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMDebugArtStats.generated.h"

class ABMDynamicContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMDebugArtStats : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMDebugArtStats();
protected:
    UFUNCTION(BlueprintCallable)
    FText GetYeastPopulation(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetYeastDeath(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetYeastActivity(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetWortBoil(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetPourWidth(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetPourSize(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetPourRate(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetPourHeight(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetParticulates(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetLingeringBubbles(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetHeadSize(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetGrainSuspension(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetDeadYeastWhileActive(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetClarity(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetBubbles(ABMDynamicContainer* ContainerRef);
    
    UFUNCTION(BlueprintCallable)
    FText GetAgitation(ABMDynamicContainer* ContainerRef);
    
};

