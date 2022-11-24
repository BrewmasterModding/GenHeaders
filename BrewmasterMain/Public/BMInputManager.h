#pragma once
#include "CoreMinimal.h"
#include "EBMPlatformEnum.h"
#include "BMActionGlyphData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BMInputMappings.h"
#include "BMInputManager.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config=InputControls)
class BREWMASTERMAIN_API UBMInputManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LongPressTime;
    
    UPROPERTY(EditAnywhere)
    float HoldEarlyReleaseTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* ActionGlyphDataKeyboardAndMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBMActionGlyphData> GlyphDataKeyboardAndMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* ActionGlyphDataXBox;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBMActionGlyphData> GlyphDataXbox;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* ActionGlyphDataPlaystation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBMActionGlyphData> GlyphDataPlaystation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* ActionGlyphDataSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FBMActionGlyphData> GlyphDataSwitch;
    
    UPROPERTY()
    int32 NumberOfActionEnums;
    
    UPROPERTY()
    TMap<int32, float> CurrentlyPressedButtons;
    
    UPROPERTY()
    TArray<FName> CurrentlyPressedMultiButtons;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBMPlatformEnum CurrentPlatformEnum;
    
    UPROPERTY()
    TArray<FBMInputMappings> DefaultMappings;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FBMInputMappings> Mappings;
    
public:
    UBMInputManager();
};

