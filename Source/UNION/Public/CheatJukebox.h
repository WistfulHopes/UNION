#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatJukebox.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatJukebox : public UObject {
    GENERATED_BODY()
public:
    UCheatJukebox();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockTrackAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockTrack(int32 TrackID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAlbumAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAlbum(int32 AlbumID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCustomTrack(int32 Lap, int32 TrackID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCustomAlbum(int32 Lap, int32 AlbumID);
    
};

