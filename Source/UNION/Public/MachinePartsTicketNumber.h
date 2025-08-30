#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MachinePartsTicketNumber.generated.h"

class UUnionUITextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachinePartsTicketNumber : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* TXT_Num_DonpaTicket01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* TXT_Num_DonpaTicket02;
    
public:
    UMachinePartsTicketNumber();

    UFUNCTION(BlueprintCallable)
    void SetNum(int32 InTicketNum, int32 InUseTicketNum);
    
};

