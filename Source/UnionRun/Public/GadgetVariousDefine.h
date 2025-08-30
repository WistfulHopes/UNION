#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGadgetId.h"
#include "GadgetVariousMemberInfo.h"
#include "GadgetVariousDefine.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetVariousDefine : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetId gadgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGadgetId, FGadgetVariousMemberInfo> GadgetMemberIDs;
    
    FGadgetVariousDefine();
};

