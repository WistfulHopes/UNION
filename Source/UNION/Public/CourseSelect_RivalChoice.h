#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDriverId.h"
#include "ERivalType.h"
#include "CourseSelect_RivalChoice.generated.h"

class UCourseSelectRivalChoiceButton;
class UImage;
class UUnionRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCourseSelect_RivalChoice : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCourseSelectRivalCutinWidgetOnFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectRivalCutinWidgetOnFinished OnFinishedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ERivalType, UCourseSelectRivalChoiceButton*> RivalChoiceButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalType ChoiceBtnCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _TextLevelUpChallengeMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _TextLevelUpChallengeSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _TextBonusUpChallengeMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _TextBonusUpChallengeSub;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _CutInCharaImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _ChallengeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _BonusTextBlock;
    
public:
    UCourseSelect_RivalChoice();

    UFUNCTION(BlueprintCallable)
    void StartLoad(EDriverId InRivalDriverId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetChoiceRivalData(EDriverId DriverId, ERivalType RivalType);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayVoice(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitFooter();
    
    UFUNCTION(BlueprintCallable)
    void FinishedWidgetFooter();
    
    UFUNCTION(BlueprintCallable)
    void BeginChoiceFooter();
    
};

