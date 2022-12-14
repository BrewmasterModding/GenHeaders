#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationLink -FallbackName=NavigationLink
#include "NavLinkHostInterface.h"
#include "NavLinkComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVIGATIONSYSTEM_API UNavLinkComponent : public UPrimitiveComponent, public INavLinkHostInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FNavigationLink> Links;
    
    UNavLinkComponent();
    
    // Fix for true pure virtual functions not being implemented
};

