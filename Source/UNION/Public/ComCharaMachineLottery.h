#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDriverId.h"
#include "EMachineColorPresetId.h"
#include "EMachineId.h"
#include "ComCharaMachineLottery.generated.h"

UCLASS(Blueprintable)
class UNION_API UComCharaMachineLottery : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> CurrentUsedDriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> CalcedComDriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMachineId> EnableMachineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMachineId> CalcedComMachineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMachineId> EnablePartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMachineColorPresetId> EnableColorPresetId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> UnUsedDriverId;
    
public:
    UComCharaMachineLottery();

    UFUNCTION(BlueprintCallable)
    TArray<EDriverId> Lottery();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void InitCurrentUsedDriverId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CalcOnlinePlayerDriverId(const UObject* WorldContextObject, const TArray<EDriverId>& InOnlineDriverId);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCOMCharacter();
    
};

