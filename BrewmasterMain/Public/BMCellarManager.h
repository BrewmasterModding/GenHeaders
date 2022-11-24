#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMSaveableActorInterface.h"
#include "BMCellarProperties.h"
#include "BMCellarManager.generated.h"

UCLASS()
class BREWMASTERMAIN_API ABMCellarManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    TArray<FBMCellarProperties> PackagedItemData;
    
public:
    ABMCellarManager();
    
    // Fix for true pure virtual functions not being implemented
};

