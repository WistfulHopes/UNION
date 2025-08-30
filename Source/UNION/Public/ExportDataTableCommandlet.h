#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "ExportDataTableCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNION_API UExportDataTableCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UExportDataTableCommandlet();

};

