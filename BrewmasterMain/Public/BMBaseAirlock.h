#pragma once
#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "BMAirlockData.h"
#include "BMBaseAirlock.generated.h"

class UMaterialInstance;
class UMaterialInstanceDynamic;

UCLASS()
class BREWMASTERMAIN_API ABMBaseAirlock : public ABMBaseEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* BubblingMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BubblingMaterialIndexSlot;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FBMAirlockData AirlockData;
    
    UPROPERTY()
    UMaterialInstanceDynamic* BubblingDynamicMaterial;
    
public:
    ABMBaseAirlock();
    UFUNCTION()
    void SetBubbleSpeed(float Speed);
    
    UFUNCTION()
    void SetBubbleOpacity(float Opacity);
    
    UFUNCTION()
    FBMAirlockData GetAirlockData();
    
};

