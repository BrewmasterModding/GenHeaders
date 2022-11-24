#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMPhotoSceneLightProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BMPhotoLightingSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPhotoLightingSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> LightTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> LightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPhotoSceneLightProperties> LightComponentProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SettingsName;
    
    FBMPhotoLightingSettings();
};

