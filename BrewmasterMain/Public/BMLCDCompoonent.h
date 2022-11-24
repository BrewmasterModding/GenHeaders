#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "BMLCDCompoonent.generated.h"

class UMeshComponent;
class UMaterialInstance;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMLCDCompoonent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UBMLCDCompoonent();
    UFUNCTION(BlueprintCallable)
    bool InitializeLCD(UMeshComponent* MeshComponentForLCD, int32 MaterialIndexForLCD, UMaterialInstance* WidgetMaterial);
    
};

