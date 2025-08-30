#pragma once
#include "CoreMinimal.h"
#include "EGadgetId.h"
#include "EMachineAuraId.h"
#include "EMachineColorPresetId.h"
#include "EMachineHornType.h"
#include "EMachineId.h"
#include "UserGadgetPresetDataList.h"
#include "UserItemProperty.h"
#include "UserMachineCustomizeData.h"
#include "UserPartsProperty.h"
#include "UserMachineAssemblyData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserMachineAssemblyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineId, FUserPartsProperty> FrontPartsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineId, FUserPartsProperty> RearPartsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineId, FUserPartsProperty> TirePartsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineId, FUserItemProperty> CompleteMachineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineColorPresetId, FUserItemProperty> ColorPresetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUserItemProperty> StickerlList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineHornType, FUserItemProperty> HornList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineAuraId, FUserItemProperty> AuraList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GadgetFragmentNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGadgetId, int32> FixedGadgetNumMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGadgetId, FUserItemProperty> GadgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GadgetSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineId, FUserMachineCustomizeData> CustomizeDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserGadgetPresetDataList> GadgetPresetDataLists;
    
    FUserMachineAssemblyData();
};

