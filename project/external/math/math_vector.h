#ifndef math_vector_H
#define math_vector_H

#include <math.h>

typedef union VECTOR2D //Either access individual X & Y values or as an array that can be indexed through
{
    struct
    {
        float X, Y;
    };

    float Elements[1];

} VECTOR2D;

//Add two vectors
inline VECTOR2D operator+(VECTOR2D A, VECTOR2D B)
{
    VECTOR2D Result;

    Result.X = A.X + B.X;
    Result.Y = A.Y + B.Y;

    return Result;
}

//Subtract two vectors
inline VECTOR2D operator-(VECTOR2D A, VECTOR2D B)
{
    VECTOR2D Result;

    Result.X = A.X - B.X;
    Result.Y = A.Y - B.Y;

    return Result;
}

//Find the length of a vector
float vector_FindLength(VECTOR2D A)
{
    float Result;

    Result = sqrt(A.X * A.X + A.Y * A.Y);

    return Result;
}

#endif