#pragma once
#include "CoreMinimal.h"
#include "HonorTitleListData.h"
#include "UnionUIButtonBase.h"
#include "HonorTitleSettingBtn.generated.h"

class UHonorTitlePlateUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHonorTitleSettingBtn : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHonorTitleSettingBtnDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHonorTitleSettingBtnDelegate OnStartTextScroll;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHonorTitleSettingBtnDelegate OnStopTextScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHonorTitlePlateUserWidget* HonorTitlePlate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 plateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortID;
    
    UHonorTitleSettingBtn();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupUnlockedHonorTitle();
    
    UFUNCTION(BlueprintCallable)
    void SetupHonorTitleButtonPlate(const FHonorTitleListData SetUpData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetNewButtonImage();
    
};

