#include "UnionTravelRingDataRow.h"

FUnionTravelRingDataRow::FUnionTravelRingDataRow() {
    this->ID = EUnionTravelRingStageId::Stage1001;
    this->OverrideMesh = NULL;
    this->bUseFinalLap = false;
    this->bCloseAsAnother = false;
}

