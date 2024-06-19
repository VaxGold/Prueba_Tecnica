#include <iostream>
#include <string.h>

int main()
{
    char str[] = "Este es un TEXTO de prueba.";
    int len = strlen(str);

    int i = 0;
    while (i < (len) / 2)
    {
        char aux = str[i];
        str[i] = str[(len - 1) - i];
        str[(len - 1) - i] = aux;
        i++;
    }
    std::cout << "El nuevo mensaje es: " << str << std::endl;
}