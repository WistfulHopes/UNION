#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECrossplayPlatform.h"
#include "RankingDataUserNoteCarParts.h"
#include "RankingDataUserNoteGadget.h"
#include "GadgetPlateUIData.h"
#include "StatusInfoPlayerDetail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UStatusInfoPlayerDetail : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpenEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCloseEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenEndDelegate OnOpend;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloseEndDelegate OnClosed;
    
    UStatusInfoPlayerDetail();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupRankIcon(int32 RankRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPlayerData(const FString& playerName, int32 HonorTitleId, ECrossplayPlatform CrossplayPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPFProfile(int32 RankRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDetailData(int32 DriverId, FRankingDataUserNoteCarParts CarPartsNote, FRankingDataUserNoteGadget GadgetNote);
    
    UFUNCTION(BlueprintCallable)
    void RequestPFProfileDisplay(const FString& InPlatformUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowPfProfileErrorWindowEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenError();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MakeGadgetPlateUIData(const FRankingDataUserNoteGadget& RankingDataUserNoteGadget, FGadgetPlateUIData& outGadgetPlateUIData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

