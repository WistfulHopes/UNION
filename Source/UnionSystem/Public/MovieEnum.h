#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MovieEnum.generated.h"

class UManaMovie;
class USoundAtomCue;

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FMovieEnum : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaMovie* MovieSource_1080p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaMovie* MovieSource_4k;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Cue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAlphaMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFullScreenMovie;
    
    FMovieEnum();
};

