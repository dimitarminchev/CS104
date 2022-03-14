#include <iostream>

int main()
{
    const int N = 20;

    int tri[N] = { 1,1,1 };

    for (int i = 3; i < N; i++)
    {
        tri[i] = tri[i - 3] + tri[i - 2] + tri[i - 1];
    }

    for (int i = 0; i < N; i++)
    {
        std::cout << tri[i] << " ";
    }
}