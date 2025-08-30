#pragma once
#include "CoreMinimal.h"
#include "HonorTitleListData.h"
#include "UnionUISceneBase.h"
#include "HonorTitleTabStruc.h"
#include "HonorTitleSettingWindow.generated.h"

class UHonorTitleListDataAsset;
class UHonorTitlePlateUserWidget;
class UHonorTitleSettingTab;
class UUnionUIButtonsPanel;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHonorTitleSettingWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHonorTitlePlateUserWidget* HonorTitleSettingUserPlate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonsPanel*> HonorTitleSettingTabPanelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTabCnt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHonorTitleTabStruc> GeneratedHonorTitleTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GeneratedHonorTitleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GeneratedTabIndex;
    
public:
    UHonorTitleSettingWindow();

    UFUNCTION(BlueprintCallable)
    void SortGeneratedHonorTitle();
    
    UFUNCTION(BlueprintCallable)
    void SetupTabsNewIcon(UHonorTitleSettingTab* TabWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetupNavigation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHonorTitleListDataAsset* GetHonorTitleListDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateHonorTitle(int32 HonorTitleIndex, FHonorTitleListData HonorTitleData);
    
    UFUNCTION(BlueprintCallable)
    void GenerateCurrentTabHonorTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddGeneratedHonorTitleToWrapBox();
    
};

