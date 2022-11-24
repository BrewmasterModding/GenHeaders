#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlock -FallbackName=RichTextBlock
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "ETextLineEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "BMRichText.generated.h"

class UBMRichText;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRichText : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCreateTooltips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDontLocalizeInnerKeys;
    
    UPROPERTY(EditAnywhere)
    FText MyText;
    
    UPROPERTY(BlueprintReadWrite)
    bool bTextIsArticleText;
    
    UPROPERTY(EditAnywhere)
    bool bShouldConvertText;
    
    UPROPERTY(EditAnywhere)
    bool FitText;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTextSize;
    
    UPROPERTY(EditAnywhere)
    float TextSizeOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTextColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor TextColorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableTextFlowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMRichText* SlateLinkedTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverflowTextAtLineHeightPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bModifyLinkedTextBoxMarginOnOverflow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D PredictedTextLayoutSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector2D CachedLayoutSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PredictedLayoutScale;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CachedLayoutScale;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasTextToFlow;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasFlowedText;
    
    UPROPERTY(BlueprintReadOnly)
    FText SlateRemainingText;
    
    UPROPERTY(BlueprintReadOnly)
    FText SlateFlowedText;
    
    UPROPERTY(EditAnywhere)
    ETextLineEffect TextLineEffectMode;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush TextUnderlineBrush;
    
    UPROPERTY(EditAnywhere)
    float UnderlineOffsetFromBaseline;
    
    UPROPERTY(EditAnywhere)
    FMargin TextLineEffectMargin;
    
    UBMRichText();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTextSizeOverride(const float NewSize, const bool bInOverrideSize);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTextColorOverride(const FSlateColor NewColor, const bool bInOverrideColor);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateLayout();
    
    UFUNCTION(BlueprintCallable)
    void SetUseArticleTextOnLinkedTextBoxes(TArray<UBMRichText*>& LinkedTextBoxes, bool InUsesArticleText);
    
    UFUNCTION(BlueprintCallable)
    void SetUseArticleText(bool InUsesArticleText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTextSizeOverride(const float NewSize);
    
    UFUNCTION(BlueprintCallable)
    void SetTextColorOverride(const FSlateColor NewColor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSlateLinkedTextBox(UBMRichText* InBMRichText);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldFlowText(bool InFlowText);
    
    UFUNCTION(BlueprintCallable)
    void SetMyText(FText InputText, bool FitInBox);
    
    UFUNCTION(BlueprintCallable)
    void SetModifyLinkedTextBoxMarginOnOverflow(bool InAdjustMarginsAfterOverflow);
    
    UFUNCTION(BlueprintCallable)
    void SetArticleText(FText InText, bool bConvertTextToIntermediateFormat);
    
    UFUNCTION(BlueprintCallable)
    UBMRichText* GetSlateLinkedTextBox();
    
    UFUNCTION(BlueprintCallable)
    FText GetRemainingText();
    
    UFUNCTION()
    void ConvertText();
    
    UFUNCTION(BlueprintPure)
    static FText ConvertArticleTextToIntermediateFormat(FText InText);
    
    UFUNCTION(BlueprintPure)
    static FText ConvertArticleTextFromIntermediateToFinalFormat(FText InText);
    
};

