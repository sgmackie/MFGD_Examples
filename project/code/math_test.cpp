#include <stdio.h>

#include "../external/math/math_vector.h"
#include "../external/entity.h"

int main(int argc, char *argv[])
{
    printf("\n");
    
    VECTOR2D Index1 = {56, 16};

    for(int i = 0; i < 2; i++)
    {
        printf("Elements: \t\t%d= %f\n", i, Index1.Elements[i]);
    }

    VECTOR2D Test1 = {4, 0};
    VECTOR2D Test2 = {8, 4};

    VECTOR2D Sum1 = Test1 + Test2;
    VECTOR2D Sum2 = Test1 - Test2;
    
    printf("\n");
    printf("Addition: \t\tX= %f\tY= %f\n", Sum1.X, Sum1.Y);
    printf("Subtraction: \t\tX= %f\tY= %f\n", Sum2.X, Sum2.Y);

    float Test1Length = vector_FindLength(Sum1);
    
    printf("\n");
    printf("Length: \t\tX= %f\n", Test1Length);

    //Entity test
    ENTITY Box1;
    Box1.Position = {7, 2};
    Box1.Velocity = {1, 0};
    Box1.Gravity = {12, 8};

    VECTOR2D NewPosition = Box1.Position + Test1;

    printf("\n");
    printf("Entity Addition: \tX= %f\tY= %f\n", NewPosition.X, NewPosition.Y);
    printf("Entity Velocity: \tX= %f\tY= %f\n", Box1.Velocity.X, Box1.Velocity.Y);
    printf("Entity Gravity: \tX= %f\tY= %f\n", Box1.Gravity.X, Box1.Gravity.Y);

    return 0;
}