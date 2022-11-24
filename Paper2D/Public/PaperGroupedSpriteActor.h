#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PaperGroupedSpriteActor.generated.h"

class UPaperGroupedSpriteComponent;

UCLASS()
class PAPER2D_API APaperGroupedSpriteActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperGroupedSpriteComponent* RenderComponent;
    
public:
    APaperGroupedSpriteActor();
};

