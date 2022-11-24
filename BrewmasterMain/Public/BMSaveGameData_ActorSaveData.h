#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BMSaveGameData_ActorSaveData_Pointers.h"
#include "BMSaveGameData_ComponentSaveData.h"
#include "BMSaveGameData_ActorSaveData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMSaveGameData_ActorSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ActorClass;
    
    UPROPERTY(VisibleAnywhere)
    FName ActorName;
    
    UPROPERTY(VisibleAnywhere)
    FTransform ActorTransform;
    
    UPROPERTY(VisibleAnywhere)
    uint32 UniqueId;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FBMSaveGameData_ActorSaveData_Pointers> PointersByCategory;
    
    UPROPERTY(VisibleAnywhere)
    TArray<uint8> ActorData;
    
    UPROPERTY(VisibleAnywhere)
    int32 ActorIDAttachedTo;
    
    UPROPERTY(VisibleAnywhere)
    bool bBPChildActor;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FBMSaveGameData_ComponentSaveData> Components;
    
    UPROPERTY(VisibleAnywhere)
    bool bLoadComponentsOnly;
    
    FBMSaveGameData_ActorSaveData();
};

