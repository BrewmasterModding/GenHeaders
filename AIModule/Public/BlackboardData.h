#pragma once
#include "CoreMinimal.h"
#include "BlackboardEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BlackboardData.generated.h"

class UBlackboardData;

UCLASS()
class AIMODULE_API UBlackboardData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBlackboardData* Parent;
    
    UPROPERTY(EditAnywhere)
    TArray<FBlackboardEntry> Keys;
    
private:
    UPROPERTY()
    uint8 bHasSynchronizedKeys: 1;
    
public:
    UBlackboardData();
};

