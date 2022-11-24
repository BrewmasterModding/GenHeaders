#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ArrowDirection.h"
#include "BMTutorialConditions.h"
#include "EnabledInteractionsActions.h"
#include "BMTutorialPopUpData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTutorialPopUpData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName PopupID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName ScreenName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FVector2D ScreenPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bIsArrowActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    ArrowDirection ArrowDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bManuallyClosed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName LeadsToPopUpID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName TutorialStageActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FName> TutorialStageComplete;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FBMTutorialConditions TriggerConditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FName> bPopupsShown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FName> bPopupsNotShown;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<EnabledInteractionsActions> EnabledInteractions;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool bRepeatable;
    
    FBMTutorialPopUpData();
};

