#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PaperSpriteActor.generated.h"

class UPaperSpriteComponent;

UCLASS()
class PAPER2D_API APaperSpriteActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSpriteComponent* RenderComponent;
    
public:
    APaperSpriteActor();
};

