#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMStoryOverview.generated.h"

class UBMCharacterOverview;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMStoryOverview : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMCharacterOverview> CharacterOverViewClass;
    
public:
    UBMStoryOverview();
    UFUNCTION(BlueprintImplementableEvent)
    void SetStoryTitle(const FText& Title);
    
protected:
    UFUNCTION()
    void OpenCharacterPage(int32 ButtonPressedIndex);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetStoryCharacterHolder();
    
};

