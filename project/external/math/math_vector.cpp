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
//Find the length of a vector
float32 vector_FindLengthSquare(VECTOR2D A)
{
    float32 Result;

    Result = (A.X * A.X + A.Y * A.Y);

    return Result;
}

//Find the length of a vector using square root
float32 vector_FindLengthSquareRoot(VECTOR2D A)
{
    float32 Result;

    Result = sqrt(A.X * A.X + A.Y * A.Y);

    return Result;
}
