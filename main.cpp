#include "functions.hpp"

int main(int args, char** argv) {

    int amntOfNums = std::stoi(argv[1]);

    std::vector<int> vector = GenerateRandVec(amntOfNums, 0, amntOfNums*5);
    printVector(vector);

    auto tempVector = vector, *tempVecPtr = &tempVector;
    auto tempVector2 = vector, *tempVec2Ptr = &tempVector2;

    std::sort(vector.begin(), vector.end(), [](int x, int y){return x < y;});
    printVector(vector);

    insertSort(tempVecPtr);
    printVector((*tempVecPtr));

    radixSort(tempVec2Ptr, 3);
    printVector((*tempVec2Ptr));
}