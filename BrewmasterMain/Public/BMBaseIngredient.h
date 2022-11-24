#pragma once
#include "CoreMinimal.h"
#include "EBMIngredientContainerSize.h"
#include "BMBaseEquipment.h"
#include "BMSaveableActorInterface.h"
#include "BMIngredientAmount.h"
#include "BMBaseIngredient.generated.h"

class UBMCarryableComponent;
class USkeletalMeshComponent;
class UBMObjectTransfer;

UCLASS()
class BREWMASTERMAIN_API ABMBaseIngredient : public ABMBaseEquipment, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMIngredientAmount Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EBMIngredientContainerSize IngredientContainerSize;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* ContainerMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMObjectTransfer* ObjectTransferComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMCarryableComponent* CarryComponent;
    
public:
    ABMBaseIngredient();
    
    // Fix for true pure virtual functions not being implemented
};

