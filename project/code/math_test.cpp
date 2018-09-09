#include <stdio.h>

#include "../external/math/math_vector.h"
#include "../external/entity.h"

int main(int argc, char *argv[])
{
    VECTOR2D Test1;
    Test1.X = 4;
    Test1.Y = 0;

    VECTOR2D Test2;
    Test2.X = 8;
    Test2.Y = 4;

    VECTOR2D Sum1 = Test1 + Test2;
    VECTOR2D Sum2 = Test1 - Test2;

    VECTOR2D Index1;
    Index1.Elements[0] = 56;
    Index1.Elements[1] = 16;

    for(int i = 0; i < 2; i++)
    {
        printf("Elements: \t\t%d=%f\n", i, Index1.Elements[i]);
    }
    
    printf("\n");
    printf("Addition: \t\tX=%f\tY=%f\n", Sum1.X, Sum1.Y);
    printf("Subtraction: \t\tX=%f\tY=%f\n", Sum2.X, Sum2.Y);

    ENTITY Box1;

    Box1.Position.X = 7;
    Box1.Position.Y = 2;

    VECTOR2D NewPosition = Box1.Position + Test1;

    printf("\n");
    printf("Entity Addition: \tX=%f\tY=%f\n", NewPosition.X, NewPosition.Y);

    return 0;
}