#ifndef entity_H
#define entity_H

#include "../external/math/math_vector.h"

typedef struct ENTITY
{
    VECTOR2D Position;
    VECTOR2D Velocity;
    VECTOR2D Gravity;
} ENTITY;

#endif