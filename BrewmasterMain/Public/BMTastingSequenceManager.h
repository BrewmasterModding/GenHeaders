#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMBeerStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "BMBeerProperties.h"
#include "BMBeerStyleMatch.h"
#include "BMTastingSequenceManager.generated.h"

class UDataTable;
class ABMBaseBeerBottle;
class ACameraActor;
class ABMBaseBeerGlass;
class UTweenContainer;
class UBMTastingSequenceScreen;
class UBMTastingDebugWidget;
class ULevelSequence;

UCLASS()
class BREWMASTERMAIN_API ABMTastingSequenceManager : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* AllBeerStylesDataSource;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FBMBeerStyle> AllBeerStyles;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNumberOfStylesToMatch;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinRequiredKeyStatPoints;
    
    UPROPERTY()
    int32 CurrentSequenceIndex;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ACameraActor> TastingSequenceCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector CameraStartLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator CameraStartRotation;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMBaseBeerGlass> BeerGlassClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector BeerGlassStartLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator BeerGlassStartRotation;
    
    UPROPERTY()
    ACameraActor* TastingSequenceCamera;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseCameraInScene;
    
    UPROPERTY()
    ABMBaseBeerGlass* BeerGlass;
    
    UPROPERTY()
    ABMBaseBeerBottle* BeerBottle;
    
    UPROPERTY(EditDefaultsOnly)
    bool PlayMarketingSequence;
    
    UPROPERTY(EditDefaultsOnly)
    bool DisableFade;
    
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMTastingSequenceScreen> TastingSequenceUIWidgetClass;
    
    UPROPERTY(Instanced)
    UBMTastingSequenceScreen* TastingSequenceUI;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnableDebugWidget;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMTastingDebugWidget> TastingDebugWidgetClass;
    
    UPROPERTY(Instanced)
    UBMTastingDebugWidget* TastingDebugUI;
    
    UPROPERTY()
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* BeerInitalPositionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* BeerPouringSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* PackagingScreenIntroSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* PackagingScreenExitSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LabelMakerIntroSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LabelMakerExitSequence;
    
public:
    ABMTastingSequenceManager();
    UFUNCTION(BlueprintCallable)
    void TasteBeerForStyle(const FBMBeerProperties& Beer, TArray<FBMBeerStyleMatch>& outPossibleBeerStyles);
    
    UFUNCTION()
    void SkipToEndOfTasting();
    
protected:
    UFUNCTION()
    void SetUpUIScreen();
    
    UFUNCTION()
    void Setup();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTastingScreen(UBMTastingSequenceScreen* TastingUI);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayBeerTastingSequence(ABMBaseBeerGlass* Glass);
    
    UFUNCTION()
    void OpenPackagingScreen();
    
public:
    UFUNCTION(BlueprintCallable)
    void NextSequenceEvent();
    
protected:
    UFUNCTION()
    void MoveContainerToSide();
    
};

