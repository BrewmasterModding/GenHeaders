#pragma once
#include "CoreMinimal.h"
#include "AnchorData.h"
#include "PanelSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=Anchors -FallbackName=Anchors
#include "CanvasPanelSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UCanvasPanelSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnchorData LayoutData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bAutoSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ZOrder;
    
    UCanvasPanelSlot();
    UFUNCTION(BlueprintCallable)
    void SetZOrder(int32 InZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector2D InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(FVector2D InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsets(FMargin InOffset);
    
    UFUNCTION()
    void SetMinimum(FVector2D InMinimumAnchors);
    
    UFUNCTION()
    void SetMaximum(FVector2D InMaximumAnchors);
    
    UFUNCTION(BlueprintCallable)
    void SetLayout(const FAnchorData& InLayoutData);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSize(bool InbAutoSize);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchors(FAnchors InAnchors);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignment(FVector2D InAlignment);
    
    UFUNCTION(BlueprintPure)
    int32 GetZOrder() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetSize() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetPosition() const;
    
    UFUNCTION(BlueprintPure)
    FMargin GetOffsets() const;
    
    UFUNCTION(BlueprintPure)
    FAnchorData GetLayout() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAutoSize() const;
    
    UFUNCTION(BlueprintPure)
    FAnchors GetAnchors() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetAlignment() const;
    
};

