#include <iostream>

int main (int narg, char **xarg)
{
    if (narg < 2)
    {
        std::cout << "No hay suficientes argumentos" << std::endl;
        return 0;
    }

    int i = 1;
    int nRes = 0;
    int cRes = 0;

    while (xarg[i] != 0)
    {
        int n = std::atoi(xarg[i++]);
        int count = 1;
        while (xarg[i] != 0 && std::atoi(xarg[i]) == n)
        {
            count++;
            i++;
        }
        if (count > cRes)
        {
            cRes = count;
            nRes = n;
        }
    }
    std::cout << "El número de moda es: " << nRes << std::endl;
}