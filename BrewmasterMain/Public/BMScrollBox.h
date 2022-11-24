#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScrollBox -FallbackName=ScrollBox
#include "BMScrollBox.generated.h"

UCLASS()
class BREWMASTERMAIN_API UBMScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StickScrollMultiplier;
    
    UBMScrollBox();
    UFUNCTION()
    void VisibilityChanged();
    
    UFUNCTION(BlueprintCallable)
    void UnbindToRightStick();
    
    UFUNCTION(BlueprintCallable)
    void SetScrollSpeed();
    
    UFUNCTION()
    void ResetScrolling();
    
    UFUNCTION(BlueprintCallable)
    void BindToRightStick();
    
protected:
    UFUNCTION()
    void AcceptRightStickInput(float Pitch, float Yaw);
    
};

