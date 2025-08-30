#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionUISceneBase.h"
#include "OnlineSettingPlayerIconSelectWidget.generated.h"

class UDataTable;
class UUnionUIButtonsPanel;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOnlineSettingPlayerIconSelectWidget : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDisplayEndDelegate, int32, OutId, bool, bOutPlayerIconSelect);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayEndDelegate DisplayEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlayerIconSelectBgColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconLineNum;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PlayerIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PlayerIconBgColorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadPlayerIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadPlayerIconBgColorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerIconSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListIconNum;
    
public:
    UOnlineSettingPlayerIconSelectWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(int32 InIconId, int32 InBgColorId, bool bInIconSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerIconSelect();
    
    UFUNCTION(BlueprintCallable)
    UUnionUIButtonsPanel* GetButtonsPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndDisplay();
    
};

