#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceUISubRing.generated.h"

class UCircularThrobber;
class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubRing : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMaxRingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNowPlayingOverSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* NUM_Tex_100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* NUM_Tex_010;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* NUM_Tex_001;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CurrentLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Ring_Loop_Red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RingBase_Eff_Img;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCircularThrobber* Eff_Ct;
    
    URaceUISubRing();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRingBackColor(int32 Index, bool IsGroup, bool IsLocalMulti);
    
    UFUNCTION(BlueprintCallable)
    void SetParams(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRingCount(const int32& NewRingCount);
    
};

