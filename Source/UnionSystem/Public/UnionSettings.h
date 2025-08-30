#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "EShortcutViewScale.h"
#include "EViewResolution.h"
#include "HoldItemQualitySettings.h"
#include "HoldItemSettings.h"
#include "MachinePostProcessSettings.h"
#include "MachineQualitySettings.h"
#include "MachineSettings.h"
#include "MatchingLobbySettings.h"
#include "MenuSettings.h"
#include "UnionCastShadowSettings.h"
#include "UnionQualitySettings.h"
#include "UnionRaceCarSettings.h"
#include "UnionTravelRingSettings.h"
#include "UnionSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=UNION)
class UNIONSYSTEM_API UUnionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionQualitySettings QualitySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EViewResolution TravelRingResolution;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionTravelRingSettings TravelRingSettings[3];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShortcutViewScale ShortcutRingViewScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineSettings MachineSettings;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionCastShadowSettings CastShadowSettings[3];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceCarSettings RaceCarSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldItemSettings HoldItemSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuSettings MenuSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchingLobbySettings MatchingLobbySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ScreenResolutionsEditor;
    
    UUnionSettings();

    UFUNCTION(BlueprintCallable)
    void SetRenderingScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLoDBias(int32 Bias);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBlur(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableRadialBlurPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableHiSpeedPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableFlowingWaterPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCastShadowRing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCastShadowItemBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCastShadowDashPanel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQualityIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinLoDPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinLoDNonPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMenuMinLoD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMachineQualitySettings GetMachineQualitySettingsPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMachineQualitySettings GetMachineQualitySettingsNonPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLobbyMeshLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHoldItemQualitySettings GetHoldItemSettingsPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHoldItemQualitySettings GetHoldItemSettingsNonPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGFurEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDynamicShadowEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUnionCastShadowSettings GetCurrentUnionCastShadowSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMachinePostProcessSettings GetCurrentMachinePostProcessSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcScreenPercentage() const;
    
};

