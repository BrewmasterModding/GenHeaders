#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextTransformPolicy -FallbackName=ETextTransformPolicy
#include "BMCreditsStructure.h"
#include "BMCreditsScreen.generated.h"

class UDataTable;
class UTexture2D;
class UBMScrollBox;
class UVerticalBox;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCreditsScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScrollSpeedInUMGUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* CreditsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, TSoftObjectPtr<UTexture2D>> CompanyImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* CompanyNameTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETextTransformPolicy CompanyNameTransformPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* RoleNameTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETextTransformPolicy RoleNameTranformPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* StaffNameTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETextTransformPolicy StaffNameTransformPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SpacerSize;
    
protected:
    UPROPERTY()
    TArray<FBMCreditsStructure> Credits;
    
public:
    UBMCreditsScreen();
    UFUNCTION()
    void PopulateCredits();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMScrollBox* GetScrollBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetCreditListPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
protected:
    UFUNCTION()
    void FinishedCredits();
    
public:
    UFUNCTION()
    void AnimateCredits();
    
};

