#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PaperTileMapActor.generated.h"

class UPaperTileMapComponent;

UCLASS()
class PAPER2D_API APaperTileMapActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperTileMapComponent* RenderComponent;
    
public:
    APaperTileMapActor();
};

