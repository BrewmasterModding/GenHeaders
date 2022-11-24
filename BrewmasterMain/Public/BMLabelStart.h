#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMLabelStartType.h"
#include "BMEditableParamSet.h"
#include "EBMLabelTextSlot.h"
#include "BMEditableParamID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BMLabelTextureAsset.h"
#include "BMLabelStart.generated.h"

class UTexture2D;
class UMaterialInstance;
class UDataTable;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLabelStart : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PresetBaseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMLabelStartType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> BaseMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMLabelTextSlot, UDataTable*> TextFonts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMEditableParamID> PlayerEditableParams;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FBMEditableParamSet> PlayerEditableCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, FLinearColor> ColourParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, float> FloatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, FBMLabelTextureAsset> TextureParams;
    
    FBMLabelStart();
};

