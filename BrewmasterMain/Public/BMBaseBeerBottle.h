#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMBaseBeerGlass.h"
#include "EBMBottleColour.h"
#include "BMBaseBeerBottle.generated.h"

class UStaticMeshComponent;
class AActor;
class UBMLabelComponent;
class UBMCarryableComponent;
class UMaterialInstance;

UCLASS()
class BREWMASTERMAIN_API ABMBaseBeerBottle : public ABMBaseBeerGlass {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* BottleCapOff;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* BottleCapOn;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* BottleLabel;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMLabelComponent> LabelComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMBottleColour, UMaterialInstance*> InsideGlassColour;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMBottleColour, UMaterialInstance*> OutsideGlassColour;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMLabelComponent* LabelComponent;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    bool CapOn;
    
public:
    ABMBaseBeerBottle();
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleContactShadow(bool bShowShadow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBottleTextures();
    
    UFUNCTION(BlueprintCallable)
    void SetBottleColour(EBMBottleColour BottleColour);
    
    UFUNCTION(BlueprintCallable)
    void SetBottleCapOn(bool bCapOn);
    
    UFUNCTION()
    void CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddCollisionMeshToIgnore();
    
};

