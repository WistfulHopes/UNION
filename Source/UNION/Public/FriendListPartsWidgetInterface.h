#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FriendListPartsWidgetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFriendListPartsWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IFriendListPartsWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTitleText(const FText& InText);
    
};

