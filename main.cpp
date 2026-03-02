#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    unsigned *b = new unsigned[N_ELEMENTS + 1];
    double atlag = 0;
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    for (unsigned i = 1; i <= N_ELEMENTS; i++)
    {
        b[i] = i * 2;
        std::cout << "Ertek: " << b[i] << std::endl;
        atlag += b[i];
    }
    
    std::cout << "Atlag szamitasa: " << std::endl;
    atlag /= N_ELEMENTS + 1;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b;
    b = NULL;

    std::cout << "Memoria felszabaditva" << std::endl;

    return 0;
}