#pragma once
#include "CoreMinimal.h"
#include "BMLabelTextData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMLabelTextSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BMLabelTextureAsset.h"
#include "BMLabelDesign.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLabelDesign : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName PresetBaseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSoftObjectPtr<UMaterialInstance> BaseMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EBMLabelTextSlot, FBMLabelTextData> TextParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, FLinearColor> ColourParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, float> FloatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, FBMLabelTextureAsset> TextureParams;
    
    FBMLabelDesign();
};

