#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=HyperlinkStyle -FallbackName=HyperlinkStyle
#include "RichTextHyperlinkDecorator.generated.h"

UCLASS()
class BREWMASTERMAIN_API URichTextHyperlinkDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHyperlinkStyle HyperlinkStyle;
    
    URichTextHyperlinkDecorator();
    UFUNCTION()
    void OpenHyperlink(const FString& HyperlinkToOpen);
    
};

