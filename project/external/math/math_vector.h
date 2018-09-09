#ifndef math_vector_H
#define math_vector_H

typedef struct VECTOR2D
{
    union //Either access individual X & Y values or as an array that can be indexed through
    {
        struct
        {
            float X, Y;
        };

        float Elements[1];
    };

} VECTOR2D;

inline VECTOR2D operator+(VECTOR2D A, VECTOR2D B)
{
    VECTOR2D Result;

    Result.X = A.X + B.X;
    Result.Y = A.Y + B.Y;

    return Result;
}

inline VECTOR2D operator-(VECTOR2D A, VECTOR2D B)
{
    VECTOR2D Result;

    Result.X = A.X - B.X;
    Result.Y = A.Y - B.Y;

    return Result;
}

#endif