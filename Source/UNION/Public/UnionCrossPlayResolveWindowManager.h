#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrossPlayResolveWindowManagerCompleteDelegate.h"
#include "Templates/SubclassOf.h"
#include "UnionCrossPlayResolveWindowManager.generated.h"

class AUnionPlatformCrossPlayChangedWindow;

UCLASS(Blueprintable)
class UNION_API AUnionCrossPlayResolveWindowManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUnionPlatformCrossPlayChangedWindow> CrossPlayChangedWindowClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnionPlatformCrossPlayChangedWindow* m_CrossPlayChangedWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrossPlayResolveWindowManagerComplete m_ResolveCompleteDelegate;
    
public:
    AUnionCrossPlayResolveWindowManager(const FObjectInitializer& ObjectInitializer);

};

