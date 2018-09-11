#ifndef math_vector_H
#define math_vector_H

#include <math.h>

//Strucutres
//2D vector that can be acessed in as two distinct variables or an array
typedef union VECTOR2D //Either access individual X & Y values or as an array that can be indexed through
{
    struct
    {
        float32 X, Y;
    };

    float32 Elements[2];

} VECTOR2D;

typedef VECTOR2D V2; //Shorthand
typedef VECTOR2D POINT2D; //Represent a 2D point
typedef VECTOR2D P2; //Shorthand for 2D points

//3D vector that can be acessed in as three distinct variables or an array
typedef union VECTOR3D //Either access individual X, Y & Z values or as an array that can be indexed through
{
    struct
    {
        float32 X, Y, Z;
    };

    float32 Elements[3];

} VECTOR3D;

typedef VECTOR3D V3; //Shorthand
typedef VECTOR3D POINT3D; //Represent a 2D point
typedef VECTOR3D P3; //Shorthand for 2D points

//Operator overloads:
//Vector addition
inline VECTOR2D operator+(VECTOR2D A, VECTOR2D B);

//Vector subtraction
inline VECTOR2D operator-(VECTOR2D A, VECTOR2D B);

//Function prototypes
//Find the length of a vector
float32 vector_FindLengthSquare(VECTOR2D A);

//Find the length of a vector using square root
float32 vector_FindLengthSquareRoot(VECTOR2D A);

#endif