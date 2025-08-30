#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerNameInterface.h"
#include "RaceUISubCourseMapIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubCourseMapIcon : public UUserWidget, public IPlayerNameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReader;
    
    URaceUISubCourseMapIcon();

    UFUNCTION(BlueprintCallable)
    void SetReaderFlag(bool InReader);
    

    // Fix for true pure virtual functions not being implemented
};

