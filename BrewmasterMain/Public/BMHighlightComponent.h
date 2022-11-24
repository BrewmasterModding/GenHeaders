#pragma once
#include "CoreMinimal.h"
#include "EBMHighlightTypes.h"
#include "BMInteractionComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "BMHighlightComponent.generated.h"

class UBMCarryableComponent;
class ABMBaseTap;
class AActor;
class ABMTube;
class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMHighlightComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, EBMHighlightTypes> HighlightComponentMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TreatAsBaseParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ABMBaseTap* Tap;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsTap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ABMDynamicContainer* Container;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ABMTube*> Tubes;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsTube;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsShowingTubeConnection;
    
    UPROPERTY()
    FTimerHandle HideConnectionTimerHandle;
    
    UPROPERTY()
    float HighlightTime;
    
public:
    UBMHighlightComponent();
    UFUNCTION()
    void ShowTubeConnection();
    
    UFUNCTION()
    void HideTubeConnection();
    
    UFUNCTION()
    void CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
    
};

