#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMStoryCharacter.h"
#include "BMCharacterData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCharacterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CharacterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMStoryCharacter StoryCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FavouriteBeer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BackgroundInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MoreBackgroundInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> NarrativeStages;
    
    FBMCharacterData();
};

