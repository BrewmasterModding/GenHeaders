#pragma once
#include "CoreMinimal.h"
#include "EBMAchievType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMAchievData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAchievData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName AchievID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMAchievType AchievementType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FName> Requirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool AchievementShouldShowProgress;
    
    FBMAchievData();
};

