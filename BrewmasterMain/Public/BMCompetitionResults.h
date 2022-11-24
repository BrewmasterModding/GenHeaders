#pragma once
#include "CoreMinimal.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
#include "ContinuePressedDelegate.h"
#include "EBMSponsor.h"
#include "EBMRankings.h"
#include "BMCompetitionResults.generated.h"

class UTweenContainer;
class UTexture2D;
class UMaterialInstance;
class UBMResourceSystem;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCompetitionResults : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ContinueActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FContinuePressed OnContinuePressed;
    
public:
    UBMCompetitionResults();
protected:
    UFUNCTION()
    void TweenActionFinished(UTweenContainer* TweenContainer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSponsor(EBMSponsor Sponsor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlaceText(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlace(EBMRankings Rank);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDifficultlyLevel(int32 Level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompetitionTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompetitionDesc(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleMaterial(UMaterialInstance* Material);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetRewardSystem();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetContinueButton();
    
    UFUNCTION()
    void ContinueAction();
    
    UFUNCTION()
    void Continue();
    
};

