#include "FestaUtil.h"

UFestaUtil::UFestaUtil() {
}

FUIColorInfo UFestaUtil::GetFestaUIColorInfo(int32 festaId, int32 GroupIndex) {
    return FUIColorInfo{};
}

FText UFestaUtil::GetFestaRentalPlateText(const FText& TargetGadgetname) {
    return FText::GetEmpty();
}

FText UFestaUtil::GetFestaPointText(int32 Point) {
    return FText::GetEmpty();
}

FColor UFestaUtil::GetFestaMainColor(int32 GroupIndex) {
    return FColor{};
}

int32 UFestaUtil::GetFestaIdUtil() {
    return 0;
}

EGroupColorId UFestaUtil::GetFestaGroupColorId(int32 festaId, int32 GroupIndex) {
    return EGroupColorId::None;
}

FText UFestaUtil::GetFestaChanceUpRatioText(int32 Ratio) {
    return FText::GetEmpty();
}

int32 UFestaUtil::ConvertFestaIdToTypeId(const int32 festaId) {
    return 0;
}


