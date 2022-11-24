#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMArtDataBeerBottles_Textures.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataBeerBottles_Textures : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UTexture> NormalMap;
    
    FBMArtDataBeerBottles_Textures();
};

