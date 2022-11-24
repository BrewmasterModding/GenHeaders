#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BMAudioAssetListBase.generated.h"

class USoundClass;
class USoundAttenuation;
class USoundBase;

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMAudioAssetListBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundClass* AudioSoundClassMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundClass* AudioSoundClassMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundClass* AudioSoundClassAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundClass* AudioSoundClassSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundClass* AudioSoundClassUISFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LiquidAttachmentPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ContainerFullPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SimmeringAudioStartTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SimmeringAudioEndTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BoilingAudioStartTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* GenericSoundAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* MusicSoundAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TestAudioAssetFromBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TitleTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, USoundBase*> Playlists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SpringPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SummerPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* AutumnPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* WinterPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* AcousticPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* AlternativePlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LofiPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ClasicalPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OtherPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CreditsTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* DayTimeAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* NightTimeAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SoftWindAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OtherAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Footsteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* FootstepsTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* FootstepsCarpet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InteractInvalid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StowInInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UnStowInInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenIngredientsCupboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CloseIngredientsCupboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StoreInIngredientsCupboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenEquipmentCupboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CloseEquipmentCupboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StoreInEquipmentCupboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenFurnitureLocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CloseFurnitureLocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StoreInFurnitureLocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenFridgeFreezer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CloseFridgeFreezer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StoreInFridgeFreezer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenCellar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CloseCellar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StoreInCellar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenBin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CloseBin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* DestroyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ClearWorkshop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ClosePackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* DeliveryThroughLetterbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CleanItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ItemRetrieve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* AdvanceSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpIngredientGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownIngredientGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpGrainBagSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpGrainBagMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpGrainBagLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownGrainBagSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownGrainBagMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownGrainBagLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpGrainMeshBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownGrainMeshBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpHopsMeshBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownHopsMeshBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpExtractCan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownExtractCan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpYeastPacket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownYeastPacket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpHerbJar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownHerbJar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpBottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownBottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpSmallBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownSmallBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SteepGrainMeshBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* RemoveGrainMeshBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SteepHopsMeshBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* RemoveHopsMeshBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* RemoveMeshBagNoLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerMetalSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerMetalMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerMetalLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerPlasticVerySmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerPlasticSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerPlasticMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerPlasticLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerGlassSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerGlassMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerGlassLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerWoodenSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerWoodenMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpContainerWoodenLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerMetalSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerMetalMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerMetalLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerMetalSmall_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerMetalMedium_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerMetalLarge_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerPlasticVerySmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerPlasticSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerPlasticMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerPlasticLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerPlasticVerySmall_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerPlasticSmall_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerPlasticMedium_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerPlasticLarge_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerGlassSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerGlassMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerGlassLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerGlassSmall_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerGlassMedium_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerGlassLarge_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerWoodenSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerWoodenMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerWoodenLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerWoodenSmall_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerWoodenMedium_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownContainerWoodenLarge_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOn_Metal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOff_Metal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOn_Plastic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOff_Plastic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOn_Wooden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOff_Wooden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOn_Screwed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOff_Screwed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOn_MetalFixing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOff_MetalFixing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOn_Carboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidOff_Carboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LidPoppingOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GasFillingContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpToolSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpToolMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpToolLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownToolSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownToolMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PutDownToolLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ImmersionCoilInsideEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ImmersionCoilInsideFullContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ImmersionCoilRemoveEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ImmersionCoilRemoveFullContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StirringLiquidSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StirringLiquidMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StirringLiquidLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StirringToolRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ThermometerPlaceInLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ThermometerRemoveFromLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* AttachStickOnThermometer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* DetachStickOnThermometer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TubeConnectToTapMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TubeConnectToTapPlastic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TubeConnectToTapWooden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TubeDisconnectTapMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TubeDisconnectTapPlastic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TubeDisconnectTapWooden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TubeClipToContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TubeUnclipFromContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TubeCancelConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenTapMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenTapPlastic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CloseTapMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* CloseTapPlastic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OpenCloseTapMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TapMainOpenPour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ValveTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PhysicalButtonGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PhysicalSwitchGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PhysicalSwitchVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* AttachAirlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* DetachAirlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PumpRunningSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PumpRunningMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PumpRunningLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ElectricKettleHeatingSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ElectricKettleHeatingMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* ElectricKettleHeatingLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GasBurnerHeatingSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GasBurnerHeatingMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GasBurnerHeatingLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* HobDialInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringLiquidGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringLiquidSmallFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringLiquidMediumFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringLiquidLargeFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringSyrupGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringSyrupVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringGrainGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringGrainVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringPowderGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringPowderVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PouringYeast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingLiquid_Shallow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingLiquid_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingLiquid_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingGrain_Shallow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingGrain_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingGrain_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SyrupImpactingGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GrainImpactingSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GrainImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GrainImpactingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GrainImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GrainImpactingGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GrainImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PowderImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PowderImpactingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PowderImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PowderImpactingGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PowderImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingLiquid_Shallow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingLiquid_Partial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingLiquid_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingGrain_Shallow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingGrain_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingGrain_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialLiquidImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialSyrupImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialSyrupImpactingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialSyrupImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialSyrupImpactingGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialSyrupImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialGrainImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialGrainImpactingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialGrainImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialGrainImpactingGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialGrainImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialPowderImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialPowderImpactingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialPowderImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialPowderImpactingGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* InitialPowderImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingLiquid_Shallow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingLiquid_Partial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingLiquid_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingGrain_Shallow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingGrain_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingGrain_Full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingLiquidImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingSyrupImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingSyrupImpactingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingSyrupImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingSyrupImpactingGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingSyrupImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingGrainImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingGrainImpactingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingGrainImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingGrainImpactingGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingGrainImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingPowderImpactingEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingPowderImpactingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingPowderImpactingSyrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingPowderImpactingGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* EndingPowderImpactingPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidSloshing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* BoilingLiquidSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* BoilingLiquidMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* BoilingLiquidLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* BoilingWithinClosedContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SimmeringLiquidSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SimmeringLiquidMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SimmeringLiquidLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OverboilingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* OverflowingLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* LiquidImpactingHeatingElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TastingSequencePouring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TastingSequenceFizz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* WaterFlowGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SitOnChairWooden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SitOnChairLeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* SitOnChairFabric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GetUpFromChairWooden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GetUpFromChairLeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* GetUpFromChairFabric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* KegPlacedInRack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaceFurnitureGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaceFurnitureWooden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaceFurniturePlastic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaceFurnitureMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaceFurnitureStone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaceFurnitureGlass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaceFurnitureFabric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpFurnitureGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpFurnitureWooden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpFurniturePlastic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpFurnitureMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpFurnitureStone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpFurnitureGlass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpFurnitureFabric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlacePlant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PickUpPlant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* WorkshopFireplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_PositiveSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_NegativeSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_NavigateBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_PopupOpenStandard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_PopupOpenWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_PopupClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_PopupOpenTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ButtonHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_KeywordHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_LongPressConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_NotificationStandard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_NotificationImportant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_GenericElementIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ProgressSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ConfirmationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_RecipePinned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_RecipeStepComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_RecipeUnpinned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_StoryObjectiveComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_StoryObjectiveIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_StoryObjectiveOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ActivityTracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ChallengeComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_EnterBuildMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_LeaveBuildMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_SetValueIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_SetValueReduce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_SubmitBeerSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_JobCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_OpenBook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_OpenMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CloseMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CloseBook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_PageTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_NoteDismissed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_StopwatchIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_StopwatchOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_StopwatchAdvanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_StopwatchReduceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_StopwatchStartStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_StopwatchReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CalendarOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CalendarClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CalendarTimeAdvancing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CalendarMarkDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ItemPurchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ResourceGainedGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ResourceGainedTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ResourceGainedReputation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_ResourceGainedMastery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_NewMasteryLevelGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_NewBreweryLevelGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CommercialSlotGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CommercialSlotBonusIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CompetitionRewardStandard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_CompetitionRewardGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_TastingSequenceStatIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_PackageBeerConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_SubMenuClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_SubMenuOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* UI_PackagingScreenTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* TastingSequenceLoopOut;
    
    UBMAudioAssetListBase();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckSoundAssetExists(const UObject* WorldContextObject, USoundBase* SoundAsset, bool ShowDebug);
    
};

