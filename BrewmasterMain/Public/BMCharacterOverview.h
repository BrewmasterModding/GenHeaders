#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMCharacterOverview.generated.h"

class UBMResourceSystem;
class UTexture2D;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCharacterOverview : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMCharacterOverview();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetUnknown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStageTitle(const FText& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetName(const FText& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompletedStages(int32 Completed, int32 TotalStages);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResource();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButton();
    
};

