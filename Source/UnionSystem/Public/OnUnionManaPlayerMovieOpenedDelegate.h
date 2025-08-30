#pragma once
#include "CoreMinimal.h"
#include "OnUnionManaPlayerMovieOpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionManaPlayerMovieOpened, const FString&, OpenedUrl);

