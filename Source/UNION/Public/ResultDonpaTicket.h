#pragma once
#include "CoreMinimal.h"
#include "EMenuSpeedClassId.h"
#include "UnionUIInputWidget.h"
#include "ResultDonpaTicket.generated.h"

class UOverlay;
class UUnionRichTextBlock;
class UUnionUITextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UResultDonpaTicket : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FResultDonpaTicketOnFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpenEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCloseEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAcceptDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSpeedClassId SpeedClassId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPowerRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAnimFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _BeforeTicketText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _AfterTicketText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _AddTicketText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* _BonusOverlay;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResultDonpaTicketOnFinished OnFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAcceptDelegate OpenOnAcceptDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenEndDelegate OpenEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloseEndDelegate CloseEndDelegate;
    
    UResultDonpaTicket();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOnBPFromRivalLevel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimFinished() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetAddTicketCount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseAnimation();
    
    UFUNCTION(BlueprintCallable)
    void BeginRivalLevelDonpaTicket(const int32 ZOrder);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AppendRivalLevelDonpaTicket();
    
    UFUNCTION(BlueprintCallable)
    void AppendRaceResultDonpaTicket();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddOpenForRival(int32 AddNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddOpen(int32 AddNum, bool bIsCountUp);
    
};

