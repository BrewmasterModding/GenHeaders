#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PartyReservation.h"
#include "PartyBeaconCrossplayPlatformMapping.h"
#include "PartyBeaconState.generated.h"

UCLASS(NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API UPartyBeaconState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FName SessionName;
    
    UPROPERTY(Transient)
    int32 NumConsumedReservations;
    
    UPROPERTY(Transient)
    int32 MaxReservations;
    
    UPROPERTY(Transient)
    int32 NumTeams;
    
    UPROPERTY(Transient)
    int32 NumPlayersPerTeam;
    
    UPROPERTY(Transient)
    FName TeamAssignmentMethod;
    
    UPROPERTY(Transient)
    int32 ReservedHostTeamNum;
    
    UPROPERTY(Transient)
    int32 ForceTeamNum;
    
    UPROPERTY(Config)
    bool bRestrictCrossConsole;
    
    UPROPERTY(Config)
    TArray<FString> PlatformCrossplayRestrictions;
    
    UPROPERTY(Config)
    TArray<FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;
    
    UPROPERTY(Transient)
    bool bEnableRemovalRequests;
    
    UPROPERTY(Transient)
    TArray<FPartyReservation> Reservations;
    
public:
    UPartyBeaconState();
};

