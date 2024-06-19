#include <iostream>

int main()
{
    double res = 19;
    int n = res - 1;
    while (n > 1)
    {
        res *= n;
        n--;
    }
    std::cout << "El resultado es: " << res << std::endl;
    return 0;
}