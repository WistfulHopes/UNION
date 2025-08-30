#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "TaggedString.h"
#include "Templates/SubclassOf.h"
#include "UnionRichTextBlock.generated.h"

class UObject;
class URichTextBlockDecorator;

UCLASS(Blueprintable)
class UNIONUI_API UUnionRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WithoutXmlString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> BaseIndex_RubyStringMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseEnFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OriginalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProcessingString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLetterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentOriginalLetterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSegmentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentOriginalEndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTaggedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlyTagContentLetterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FTaggedString> SegmentIndex_TaggedString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScrollingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollEndDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollFadeInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollFadeOutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
public:
    UUnionRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void UpdateText(TSubclassOf<URichTextBlockDecorator> DecoratorClass);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOriginalLetterIndex();
    
    UFUNCTION(BlueprintCallable)
    void SetSequentialText(const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetScrollEnable(bool bInEnableScroll);
    
    UFUNCTION(BlueprintCallable)
    void SetFontMaterialForDefaultTextStyleOverride(UObject* FontBodyMaterial, UObject* OutlineMaterial);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDefaultFontSize(int32 NewSize);
    
    UFUNCTION(BlueprintCallable)
    void RemoveXml(const FString& InString, FString& OutString);
    
    UFUNCTION(BlueprintCallable)
    void PlayNextLetter();
    
    UFUNCTION(BlueprintCallable)
    void ParseBaseText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayLetterEnd();
    
    UFUNCTION(BlueprintCallable)
    void InitFontSizeSetting();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScrollEnable() const;
    
    UFUNCTION(BlueprintCallable)
    void GetFontMaterialsFromDefaultTextStyleOverride(UObject*& FontBodyMaterial, UObject*& OutlineMaterial);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultFontSize() const;
    
};

