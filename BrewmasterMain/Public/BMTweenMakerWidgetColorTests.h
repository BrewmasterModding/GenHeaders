#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMTweenMakerWidgetColorTests.generated.h"

class UTweenContainer;
class UBorder;
class UTextBlock;
class URichTextBlock;
class UImage;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTweenMakerWidgetColorTests : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTweenContainer* mActiveTweenContainer;
    
public:
    UBMTweenMakerWidgetColorTests();
    UFUNCTION(BlueprintCallable)
    UTweenContainer* TestTweenContainer2Forward();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenContainerWidgetColorJoinToTests();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenContainerWidgetColorJoinFromToTests();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenContainerWidgetColorAppendToTest();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenContainerWidgetColorAppendFromToTest();
    
    UFUNCTION(BlueprintCallable)
    void PlayJoinTweenContainersTests();
    
    UFUNCTION(BlueprintCallable)
    void PlayAppendTweenContainersTests();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUserWidget* GetTestUUserwidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetTestText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URichTextBlock* GetTestRichText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetTestImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBorder* GetTestBorder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetInterstitial2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetInterstitial1();
    
};

