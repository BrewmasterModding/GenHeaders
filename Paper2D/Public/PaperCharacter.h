#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "PaperCharacter.generated.h"

class UPaperFlipbookComponent;

UCLASS()
class PAPER2D_API APaperCharacter : public ACharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbookComponent* Sprite;
    
public:
    APaperCharacter();
};

