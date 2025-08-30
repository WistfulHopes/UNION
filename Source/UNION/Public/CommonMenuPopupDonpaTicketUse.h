#pragma once
#include "CoreMinimal.h"
#include "UnionUIPopupWindowBase.h"
#include "CommonMenuPopupDonpaTicketUse.generated.h"

class UMachinePartsTicketNumber;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonMenuPopupDonpaTicketUse : public UUnionUIPopupWindowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachinePartsTicketNumber* TicketNumberWidget;
    
    UCommonMenuPopupDonpaTicketUse();

    UFUNCTION(BlueprintCallable)
    void SetNum(int32 InTicketNum, int32 InUseTicketNum);
    
};

