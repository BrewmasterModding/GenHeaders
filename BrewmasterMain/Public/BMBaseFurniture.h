#pragma once
#include "CoreMinimal.h"
#include "BMBaseActor.h"
#include "BMFurnitureData.h"
#include "EBMInteractingWith.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "BMBaseFurniture.generated.h"

class UBMBuildModeComponent;
class UBoxComponent;

UCLASS()
class BREWMASTERMAIN_API ABMBaseFurniture : public ABMBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugCorners;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBMFurnitureData FurnitureData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UBMBuildModeComponent* BuildModeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bShouldOffsetViewAngle;
    
    UPROPERTY()
    FName ItemSpecificDataSourceRowName;
    
public:
    ABMBaseFurniture();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractingWith(EBMInteractingWith NewInteractingWith);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBoxComponent* GetSwapCollisionBoxComp();
    
    UFUNCTION(BlueprintCallable)
    FBMFurnitureData GetFurnitureData();
    
    UFUNCTION(BlueprintCallable)
    FBoxSphereBounds BMGetLocalBounds();
    
};

