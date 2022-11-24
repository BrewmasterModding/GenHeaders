#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
#include "BMBootScreenWidget.generated.h"

class UWidget;
class UTweenContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBootScreenWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UWidget*> AllTitles;
    
    UPROPERTY(Instanced)
    TArray<UWidget*> TitleOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StayOnScreenTime;
    
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceShowConsoleTitle;
    
public:
    UBMBootScreenWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetConsoleContinueText(const FText& TextToSet);
    
    UFUNCTION()
    void NextTween();
    
    UFUNCTION(BlueprintCallable)
    void KeyPressedMouse(const FGeometry& MyGeometry, const FPointerEvent& InKeyEvent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UWidget*> GetTitleOrder(bool CurrentPlatformIsConsole);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetConsoleTitleScreen();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetBeerWarningTitle();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UWidget*> GetAllTitles();
    
    UFUNCTION()
    void BootSequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void BootScreenOnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);
    
};

