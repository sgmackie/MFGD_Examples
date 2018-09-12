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
//!Avoid writing overloads for things that are ambiguous! eg, "*" could be multiplaction or could be dot product; make functions for these instead
//Vector addition
inline VECTOR2D operator+(VECTOR2D A, VECTOR2D B);

//Vector subtraction
inline VECTOR2D operator-(VECTOR2D A, VECTOR2D B);

//Function prototypes
//Multiply vector by a scalar (pass by address)
void vector_Multiply(VECTOR2D &A, float32 Scalar);

//Divide vector by a scalar (pass by address)
void vector_Divide(VECTOR2D &A, float32 Scalar);

//Find the length of a vector
float32 vector_Length(VECTOR2D A);

//Find the length of a vector (must be used in comparison with another vector; this cancels the square root in the equation)
float32 vector_LengthSquared(VECTOR2D A);

#endif