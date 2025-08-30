#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDriverId.h"
#include "CourseSelectRivalCutinWidget.generated.h"

class UImage;
class UUnionRichTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCourseSelectRivalCutinWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCourseSelectRivalCutinWidgetOnLoaded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCourseSelectRivalCutinWidgetOnFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectRivalCutinWidgetOnLoaded OnLoadedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectRivalCutinWidgetOnFinished OnFinishedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId _RivalDriverIdNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId _RivalDriverIdHighLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _MaxRivalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _RivalLevelNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _RivalLevelPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _BlankIconHideCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayRivalChoice;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _CharaImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _CharaShadowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _CharaNameTextBlock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalCutin_InOut;
    
public:
    UCourseSelectRivalCutinWidget();

    UFUNCTION(BlueprintCallable)
    void StartLoad();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
};

