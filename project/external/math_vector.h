typedef struct VECTOR2D
{
    union
    {
        struct
        {
            float X, Y;
        };

        float Elements[2];
    };

} VECTOR2D;

inline VECTOR2D operator+(VECTOR2D A, VECTOR2D B)
{
    VECTOR2D Result;

    Result.X = A.X + B.X;
    Result.Y = A.Y + B.Y;

    return Result;
}