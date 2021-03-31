#include <cmath>
#include <array>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <list>

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

class functions
{
private:
    int id;
    int uid;
    std::array<int, 5> L;
public:
    uint setId(int x);
    int getId();
    uint setUid(int x);
    int getUid();
    void setArray(std::array<int, 5> x);
    std::array<int, 5> getArray();
};

std::vector<int> GenerateRandVec(int amntOfNums, int min, int max);
int getCurrentTime();

template <typename T> void insertSort(std::vector<T>* vector);
template <typename T> void printVector(std::vector<T> vector);
template <typename T> void radixSort(std::vector<T>* vector, int max);
#include "sortAlg.cpp"

#endif