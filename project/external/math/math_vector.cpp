#include "../math/math_vector.h"

//Operator overloads:
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

//Functions:
//Multiply vector by a scalar (pass by address)
void vector_Multiply(VECTOR2D &A, float32 Scalar)
{
    A.X = A.X * Scalar;
    A.Y = A.Y * Scalar;
}

//Divide vector by a scalar (pass by address)
void vector_Divide(VECTOR2D &A, float32 Scalar)
{
    A.X = A.X / Scalar;
    A.Y = A.Y / Scalar;
}

//Find the length of a vector
float32 vector_Length(VECTOR2D A)
{
    float32 Result;

    Result = sqrt(A.X * A.X + A.Y * A.Y);

    return Result;
}

//Find the length of a vector (must be used in comparison with another vector; this cancels the square root in the equation)
float32 vector_LengthSquared(VECTOR2D A)
{
    float32 Result;

    Result = (A.X * A.X + A.Y * A.Y);

    return Result;
}

//Find the unit length of a vector by dividing the vector by it's own length
VECTOR2D vector_UnitLength(VECTOR2D A)
{
    VECTOR2D Result = A;
    float32 InputLength = vector_Length(A);

    vector_Divide(Result, InputLength);

    return Result;
}