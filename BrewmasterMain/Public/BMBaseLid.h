#pragma once
#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "BMBaseLid.generated.h"

UCLASS()
class ABMBaseLid : public ABMBaseEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartOpen;
    
    ABMBaseLid();
};

