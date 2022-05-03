#include <iostream>

int divideBy2(int nb)
{
    return nb >> 1;
}

bool isPair(int nb)
{
    return !(nb & 1);
}

void printCharBinary(char letter)
{
    for (int i = 7; i >= 0; i--)
    {
        std::cout << ((letter >> i) & 1);
    }
}

void printIntBin(int nb)
{
    for (int i = 31;i >= 0; i--)
    {
        std::cout << ((nb>> i) & 1);
    }
    std::cout << "\n";
}

void printStringBinary(const char* str, int n)
{
    for (int i = 0; i < n; i++)
    {
        printCharBinary(str[i]);
        std::cout << ' ';
    }
}

int put1in3rd(int nb)
{
    return nb | 4;
}

int flipNthBit(int nb, int pos)
{
    int mask{ 1 << pos };
    return nb ^ mask;
}

int absBin(int nb)
{
    int mask{ nb >> 31 };
    return (mask + nb) ^ mask;
    
}

int main()
{
    int b{ 8 };
    int c{ absBin(b) };
    std::cout << c;    
}