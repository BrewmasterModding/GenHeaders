#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMLabelStart.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMSaveableActorInterface.h"
#include "BMLabelDesign.h"
#include "BMLabelRenderAssets.h"
#include "BMLabelTextureAsset.h"
#include "EBMLabelTextSlot.h"
#include "BMPackagedBeerData.h"
#include "EBMLabelTextureType.h"
#include "BMLabelTextData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BMEditableParamSet.h"
#include "BMLabelMakerManager.generated.h"

class UBMLabelTextWidget;
class UDataTable;
class UTexture2D;
class UTexture;
class UMaterialInterface;
class ABMBaseBeerBottle;
class UMaterialInstanceDynamic;
class UObject;

UCLASS()
class BREWMASTERMAIN_API ABMLabelMakerManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, FBMLabelDesign> LabelDesigns;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FBMLabelDesign EditableLabelDesign;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FBMLabelStart EditableLabelStart;
    
    UPROPERTY(VisibleAnywhere)
    FBMLabelRenderAssets EditableLabelAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMLabelStart BlankTastingSequenceLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StartingLabelMakerDesign;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UDataTable> LabelStartsDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UDataTable> LabelStartsDataTable_Demo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMLabelStart> AvaliableTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMLabelStart> AvaliablePresets;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FName> CodeSetParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> StrokeTextureParameterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> StrokeTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> NullStrokeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMLabelTextureAsset> IconTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMLabelTextureAsset> Shape1Textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMLabelTextureAsset> Shape2Textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> BackgroundTextures;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UDataTable>> TextStyleAssets;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UDataTable*> TextStyles;
    
    UPROPERTY(EditDefaultsOnly)
    FName IconTextureParamName;
    
    UPROPERTY(EditDefaultsOnly)
    FName IconTextureParamName_BMP;
    
    UPROPERTY(EditDefaultsOnly)
    FName IconIsSDFParamName;
    
    UPROPERTY(EditDefaultsOnly)
    FName IconTextureStartEnd;
    
    UPROPERTY(EditDefaultsOnly)
    FName IconTextureScale;
    
    UPROPERTY(EditDefaultsOnly)
    FName Shape1TextureParamName;
    
    UPROPERTY(EditDefaultsOnly)
    FName Shape1TextureStartEnd;
    
    UPROPERTY(EditDefaultsOnly)
    FName Shape2TextureParamName;
    
    UPROPERTY(EditDefaultsOnly)
    FName Shape2NullParamName;
    
    UPROPERTY(EditDefaultsOnly)
    FName Shape2TextureStartEnd;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> Background2TextureParamNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> NullShape2Texture;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> NullIconTexture;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> TextTextureParamNames;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMLabelTextSlot, FName> TextOptionsCategories;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMLabelTextWidget> LabelTextWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> ShapeIconMaterial_SDF;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> ShapeIconMaterial_Standard;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> ShapeIconMaterial_Border;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> ShapeIconMaterial_Background;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> LabelStartIconMaterial;
    
private:
    UPROPERTY()
    ABMBaseBeerBottle* LabelMakerBottle;
    
    UPROPERTY()
    TMap<FName, FBMLabelRenderAssets> ActiveLabels;
    
public:
    ABMLabelMakerManager();
    UFUNCTION()
    FName UseDefaultLabel();
    
    UFUNCTION()
    void UpdateLabelMakerText(const FBMPackagedBeerData& BeerData);
    
protected:
    UFUNCTION()
    void TryLoadTextRenders();
    
    UFUNCTION(BlueprintCallable)
    bool TryLoadLabelFromGameInstance(FName LabelID);
    
    UFUNCTION()
    void SetStringValuesFromBeerDataToLabelDesign(const FBMPackagedBeerData& BeerData, FBMLabelDesign& inLabelDesign) const;
    
    UFUNCTION()
    void SetCodeSetParamsForTexture(FName ParamID, FBMLabelTextureAsset Param, UMaterialInstanceDynamic* DynamicMaterial, FBMLabelDesign& inLabelDesign) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveParamToLabelDesign_Texture(FName ParamID, FBMLabelTextureAsset Param);
    
    UFUNCTION(BlueprintCallable)
    void SaveParamToLabelDesign_Text(EBMLabelTextSlot ParamID, FBMLabelTextData Param);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SaveParamToLabelDesign_Float(FName ParamID, float Param);
    
    UFUNCTION(BlueprintCallable)
    void SaveParamToLabelDesign_Colour(FName ParamID, FLinearColor Param);
    
public:
    UFUNCTION()
    FName SaveLabelDesignToGameInstance(const FString& BeerName);
    
    UFUNCTION()
    void NewSelectedPresetForEditableLabel(FBMLabelStart PresetData, bool bClearHistory);
    
protected:
    UFUNCTION(BlueprintPure)
    void GetParamMinMaxs(const FName ParamName, FVector2D& outMinMax);
    
public:
    UFUNCTION(BlueprintPure)
    FBMLabelTextData GetParamFromLabelDesign_Text(EBMLabelTextSlot TextSlot);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetParamFromLabelDesign_Float(FName ParamName);
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetParamFromLabelDesign_Colour(FName ParamName);
    
public:
    UFUNCTION()
    EBMLabelTextureType GetOptionsForTexturePicker(const FName ParamID, TArray<FBMLabelTextureAsset>& outTextureOptions);
    
private:
    UFUNCTION()
    UMaterialInterface* GetMaterialInstanceForTextureType(EBMLabelTextureType inTextureType, bool bIsSDF) const;
    
protected:
    UFUNCTION(BlueprintPure)
    UDataTable* GetLabelStartsDataTable() const;
    
public:
    UFUNCTION()
    FBMLabelStart GetLabelStartByName(FName InName, bool bIncludePresets, bool bIncludeTemplates);
    
    UFUNCTION(BlueprintPure)
    void GetLabelPresets(TArray<FBMLabelStart>& outPresets, const bool bActuallyTemplates);
    
    UFUNCTION()
    void GetEditableCategoriesForCurrentLabel(TMap<FName, FBMEditableParamSet>& outParamSets) const;
    
    UFUNCTION()
    UMaterialInstanceDynamic* CreatePreviewMaterial(UTexture* CurrentTexture, EBMLabelTextureType inTextureType, bool bIsSDF, UObject* InOuter) const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* CreateParamPreviewMaterial(const FName ParamID, UObject* InOuter);
    
    UFUNCTION()
    UMaterialInstanceDynamic* CreateIconMI(FBMLabelDesign inLabelDesign);
    
protected:
    UFUNCTION()
    UMaterialInstanceDynamic* CreateDynamicMIFromDesign(FBMLabelDesign inLabelDesign);
    
public:
    UFUNCTION(BlueprintPure)
    FName ConvertTextTypeToParamID(const EBMLabelTextSlot inTextureType);
    
    UFUNCTION(BlueprintPure)
    EBMLabelTextSlot ConvertParamIDToTextType(const FName inTextureTypeParam);
    
    
    // Fix for true pure virtual functions not being implemented
};

