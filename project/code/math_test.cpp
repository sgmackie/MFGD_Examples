#include <stdio.h>
#include "../../misc/includes/win32_types.h"
// #include "../../misc/includes/debug_memory.cpp"

#include "../external/entity.h"

//Unity Build
#include "../external/math/math_vector.cpp"

int main(int argc, char *argv[])
{   
    //Print elements of a vector
    printf("\n");
    VECTOR2D Index1 = {56, 16};

    for(int8 i = 0; i < 2; i++)
    {
        printf("Element %d: \t\t\t%d= %f\n", i+1, i+1, Index1.Elements[i]);
    }

    //Add and subtract vectors
    VECTOR2D Test1 = {4, 0};
    VECTOR2D Test2 = {8, 4};

    VECTOR2D Sum1 = Test1 + Test2;
    VECTOR2D Sum2 = Test1 - Test2;
    
    printf("\n");
    printf("Addition: \t\t\tX= %f\tY= %f\n", Sum1.X, Sum1.Y);
    printf("Subtraction: \t\t\tX= %f\tY= %f\n", Sum2.X, Sum2.Y);

    //Multiply and divide vectors by a scalar
    VECTOR2D ToScale1 = {1, 9};
    VECTOR2D ToScale2 = {6, 8};

    vector_Multiply(ToScale1, 2);
    vector_Divide(ToScale2, 2);

    printf("\n");
    printf("Multiply: \t\t\tX= %f\tY= %f\n", ToScale1.X, ToScale1.Y);
    printf("Divide: \t\t\tX= %f\tY= %f\n", ToScale2.X, ToScale2.Y);

    //Find the length of a vector using square root
    float32 Test1Length = vector_Length(Sum1);
   
    printf("\n");
    printf("Length square root: \t\tL= %f\n", Test1Length);

    //Find the dot product
    VECTOR2D ToDot1 = {5, -1};
    VECTOR2D ToDot2 = {-5, 1};

    float32 DotProduct1 = vector_DotProduct(ToDot1, ToDot2);
   
    printf("\n");
    printf("Dot product of two vectors : \tD= %f\n", DotProduct1);

    //Compare the length of two vectors
    POINT2D Pacman = {0, -1};
    POINT2D Inky = {1, 1};
    POINT2D Clyde = {2, -1};

    VECTOR2D VectorCP = Pacman - Clyde;
    VECTOR2D VectorIP = Pacman - Inky;

    float32 LengthCP = vector_LengthSquared(VectorCP);
    float32 LengthIP = vector_LengthSquared(VectorIP);
    
    printf("\n");
    printf("Length of CP: \t\t\tL= %f\n", LengthCP);
    printf("Length of IP: \t\t\tL= %f\n", LengthIP);

    //Using length and scaling to calculate speed
    printf("\n");
    VECTOR2D SpeedInitial = {3, 4};
    VECTOR2D SpeedDoubled = SpeedInitial, SpeedHalved = SpeedInitial;

    vector_Multiply(SpeedDoubled, 2);
    vector_Divide(SpeedHalved, 2);

    float32 SpeedInitialLength = vector_Length(SpeedInitial);
    float32 SpeedDoubledLength = vector_Length(SpeedDoubled);
    float32 SpeedHalvedLength = vector_Length(SpeedHalved);

    printf("Speed Initial: \t\t\tS= %f\n", SpeedInitialLength);
    printf("Speed Doubled: \t\t\tS= %f\n", SpeedDoubledLength);
    printf("Speed Halved: \t\t\tS= %f\n", SpeedHalvedLength);

    //Finding unit length
    VECTOR2D ToUnit1 = {5, 7};
    VECTOR2D Unit1 = vector_UnitLength(ToUnit1);

    printf("\n");
    printf("Unit length: \t\t\tL= %f\n", vector_Length(Unit1));

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

    // #ifdef F_MEMORY_DEBUG
    // printf("\n");
    // float32 *Samples = (float32 *) malloc((sizeof Samples));
    // float64 *Samples2 = (float64 *) malloc((sizeof Samples2));
    // f_debug_mem_print(10);
    // #endif

    return 0;
}