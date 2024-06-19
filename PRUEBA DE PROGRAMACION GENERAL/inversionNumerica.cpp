#include <iostream>

int main()
{
    int A[9] = {3, 4, 5, 9, 8, 7, 2, 5, 7};
    int B[9] = {3, 9, 2, 4, 8, 5, 5, 7, 7};

    int i = 0;
    while (i < 9)
    {
        if (A[i] != B[i])
        {
            int j = i + 1;
            while (j < 9 && A[j] != B[i])
                j++;
            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
        i++;
    }
    std::cout << "El nuevo cadena numérica es: ";
    for (int i = 0; i < 9; ++i)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}