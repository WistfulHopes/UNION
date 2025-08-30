#include "UnionWidgetTransform.h"

FUnionWidgetTransform::FUnionWidgetTransform() {
    this->_SlotType = EUnionWidgetSlotType::None;
    this->_AutoSize = false;
    this->_HorizontalAlignment = HAlign_Fill;
    this->_VerticalAlignment = VAlign_Fill;
}

