#include "Collider.h"

FCollider::FCollider() {
    this->_ColliShapeType = EColliderColliShapeType::Box;
    this->_Radius = 0.00f;
    this->_HalfHeight = 0.00f;
    this->_Axes = EColliderColliAxes::X;
}

