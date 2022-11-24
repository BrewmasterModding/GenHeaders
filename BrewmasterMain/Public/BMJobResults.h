#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "EBMSponsor.h"
#include "BMJobResults.generated.h"

class UBMResourceSystem;
class UVerticalBox;
class UBMBulletTextItem;
class UTexture2D;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMJobResults : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMBulletTextItem> BulletItemClass;
    
public:
    UBMJobResults();
    UFUNCTION(BlueprintImplementableEvent)
    void SwitchCustomAssets(EBMSponsor Sponsor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerImage(UTexture2D* Image);
    
protected:
    UFUNCTION()
    void OpenDemoOutroScreen();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResourcePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetRequirmentsList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetBonusResourcePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetBonusRequirmentsList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetAcceptButton();
    
protected:
    UFUNCTION()
    void ContinueActionButton();
    
    UFUNCTION()
    void Continue();
    
};

