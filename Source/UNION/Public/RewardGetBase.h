#pragma once
#include "CoreMinimal.h"
#include "EMachineId.h"
#include "UnionUIInputWidget.h"
#include "RewardGetWindowParam.h"
#include "RewardGetBase.generated.h"

class UImage;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API URewardGetBase : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpenEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCloseEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenEndDelegate OpenEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloseEndDelegate CloseEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWindowInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Title;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _DonpaTicketNameText;
    
public:
    URewardGetBase();

    UFUNCTION(BlueprintCallable)
    void SetTitleText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineTypeIcon(uint8 InMachineType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDisplayParam(const TArray<FRewardGetWindowParam>& InDisplayParamArray, int32 InWindowZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDisplayMachineId(const TArray<EMachineId>& InMachineIdArray);
    
    UFUNCTION(BlueprintCallable)
    void SetCloseTime(float InCloseTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeTimeClose();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetMachineTypeIconImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
};

