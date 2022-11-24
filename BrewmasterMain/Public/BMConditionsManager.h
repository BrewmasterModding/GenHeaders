#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMConditionsManager.generated.h"

class UDataTable;

UCLASS()
class BREWMASTERMAIN_API ABMConditionsManager : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* MasterItemDataTable;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FString ConditionVar1LocName;
    
    UPROPERTY(EditDefaultsOnly)
    FString ConditionVar2LocName;
    
    UPROPERTY(EditDefaultsOnly)
    FString ConditionVar3LocName;
    
    UPROPERTY(EditDefaultsOnly)
    FString ConditionLocName;
    
public:
    ABMConditionsManager();
};

