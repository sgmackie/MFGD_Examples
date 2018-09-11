#include <stdio.h>
#include "../../misc/includes/win32_types.h"

#include "../external/entity.h"

//Unity Build
#include "../external/math/math_vector.cpp"

int main(int argc, char *argv[])
{
    printf("\n");
    
    VECTOR2D Index1 = {56, 16};

    for(int8 i = 0; i < 2; i++)
    {
        printf("Element %d: \t\t\t%d= %f\n", i+1, i+1, Index1.Elements[i]);
    }

    VECTOR2D Test1 = {4, 0};
    VECTOR2D Test2 = {8, 4};

    VECTOR2D Sum1 = Test1 + Test2;
    VECTOR2D Sum2 = Test1 - Test2;
    
    printf("\n");
    printf("Addition: \t\t\tX= %f\tY= %f\n", Sum1.X, Sum1.Y);
    printf("Subtraction: \t\t\tX= %f\tY= %f\n", Sum2.X, Sum2.Y);

    float32 Test1Length = vector_FindLengthSquareRoot(Sum1);
   
    printf("\n");
    printf("Length square root: \t\tL= %f\n", Test1Length);

    POINT2D Pacman = {0, -1};
    POINT2D Inky = {1, 1};
    POINT2D Clyde = {2, -1};

    VECTOR2D VectorCP = Pacman - Clyde;
    VECTOR2D VectorIP = Pacman - Inky;

    float32 LengthCP = vector_FindLengthSquare(VectorCP);
    float32 LengthIP = vector_FindLengthSquare(VectorIP);
    
    printf("\n");
    printf("Length of CP: \t\t\tL= %f\n", LengthCP);
    printf("Length of IP: \t\t\tL= %f\n", LengthIP);

    //Entity test
    ENTITY Box1;
    Box1.Position = {7, 2};
    Box1.Velocity = {1, 0};
    Box1.Gravity = {12, 8};

    VECTOR2D NewPosition = Box1.Position + Test1;

    printf("\n");
    printf("Entity Addition: \t\tX= %f\tY= %f\n", NewPosition.X, NewPosition.Y);
    printf("Entity Velocity: \t\tX= %f\tY= %f\n", Box1.Velocity.X, Box1.Velocity.Y);
    printf("Entity Gravity: \t\tX= %f\tY= %f\n", Box1.Gravity.X, Box1.Gravity.Y);

    return 0;
}