#pragma once
#include "CoreMinimal.h"
#include "ERivalTeamId.h"
#include "UnionUIButtonBase.h"
#include "RivalTeamSelectIconWidget.generated.h"

class UImage;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class URivalTeamSelectIconWidget : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_TeamIcon_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_TeamIcon_Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_Complet_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_Complet_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_Complet_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* DSP_LoadingCharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TextureRewardOFF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TextureRewardON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TeamIconSoftTexture;
    
public:
    URivalTeamSelectIconWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void Unfocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFocusSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCancelSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationSelectLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationSelectIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalTeamId GetTeamID() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Focus();
    
    UFUNCTION(BlueprintCallable)
    void Back();
    
};

