#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalTeamId.h"
#include "PartyRaceRivalTeamCutinWidget.generated.h"

class UCanvasPanel;
class UCommonRivalLevelWidget;
class UImage;
class UUnionRichTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UPartyRaceRivalTeamCutinWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRaceRivalTeamCutinWidgetOnLoaded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRaceRivalTeamCutinWidgetOnFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceRivalTeamCutinWidgetOnLoaded OnLoadedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceRivalTeamCutinWidgetOnFinished OnFinishedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* _RootCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _LeaderImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _MemberImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _MachineImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _TeamIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _TeamNamePlateImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _TeamNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRivalLevelWidget* _RivalLevelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalCutin_InOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalCutin_InOut_Next;
    
public:
    UPartyRaceRivalTeamCutinWidget();

    UFUNCTION(BlueprintCallable)
    void StartLoad(ERivalTeamId RivalTeamId, int32 RivalTeamLevel);
    
    UFUNCTION(BlueprintCallable)
    void Play(bool PlayNextCutin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
};

