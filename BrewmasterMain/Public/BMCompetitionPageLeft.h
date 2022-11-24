#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMSponsor.h"
#include "BMCompetitionPageLeft.generated.h"

class UBMResourceSystem;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCompetitionPageLeft : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMCompetitionPageLeft();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSponsor(EBMSponsor Sponsor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDifficultlyLevel(int32 Level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompetitionTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetSilverRewards();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetGoldRewards();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetBronzeRewards();
    
};

