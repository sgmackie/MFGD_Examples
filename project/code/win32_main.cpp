#include <stdio.h>

#include "../external/math_vector.h"

int main(int argc, char *argv[])
{
    VECTOR2D Test1;
    Test1.X = 4;
    Test1.Y = 0;

    VECTOR2D Test2;
    Test2.X = 8;
    Test2.Y = 4;

    VECTOR2D Sum1 = Test1 + Test2;

    printf("%f\t%f\n", Sum1.X, Sum1.Y);

    return 0;
}