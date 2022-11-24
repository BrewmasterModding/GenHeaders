#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMNarrativeNote.generated.h"

class UBMResourceSystem;
class UTexture2D;
class UBMObjectiveSystem;
class UBMActionGlyph;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMNarrativeNote : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMNarrativeNote();
    UFUNCTION(BlueprintImplementableEvent)
    void SetStoryText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacterName(const FText& Text);
    
    UFUNCTION()
    void PlayCloseAudio();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideRewards();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResourceSystem();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMObjectiveSystem* GetRequirmentHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetContinueButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetContinueActionGlyph();
    
};

