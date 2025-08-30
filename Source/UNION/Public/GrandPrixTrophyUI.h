#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGrandPrixId.h"
#include "EGrandPrixProgressId.h"
#include "GrandPrixTrophyUI.generated.h"

class UBorder;
class UImage;
class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGrandPrixTrophyUI : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrandPrixId GrandPrixId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TrophyMaterialGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TrophyMaterialGold_Ticket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TrophyMaterialSilver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TrophyMaterialBronze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TrophyGlowMaterialGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TrophyGlowMaterialGold_Ticket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TrophyGlowMaterialSilver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TrophyGlowMaterialBronze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBorder* DSP_PAT_Achievement_GrandPrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* DSP_PAT_Eff_Achievement_GrandPrix;
    
    UGrandPrixTrophyUI();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetGrandPrixProgress(EGrandPrixProgressId InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGrandPrix(EGrandPrixId InGrandprixId);
    
};

