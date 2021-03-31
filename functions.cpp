#include "functions.hpp"

uint functions::setId(int x)
{
    id = x;
    if (id == x)
        return 0;
    return 1;
}
int functions::getId()
{
    return id;
}
uint functions::setUid(int x)
{
    uid = x;
    if (uid == x)
        return 0;
    return 1;
}
int functions::getUid()
{
    return uid;
}
void functions::setArray(std::array<int, 5> x)
{
    for (int i = 0; i < 5; i++) {
        L[i] = x[i];
    }
}
std::array<int, 5> functions::getArray()
{
    return L;
}

std::vector<int> GenerateRandVec(int amntOfNums, int min, int max)
{
    std::vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    while (i < amntOfNums)
    {
        randVal = min + std::rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}

int getCurrentTime() 
{
    return time(NULL);
}