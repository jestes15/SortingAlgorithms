#include "functions.hpp"

int main(int args, char** argv)
{
    std::ofstream out("arraySort.txt", std::ios::out);
    int amntOfNums = std::stoi(argv[1]);

    std::vector<int> vector = GenerateRandVec(amntOfNums, 0, amntOfNums*5);
    printVector(vector, out);

    auto tempVector = vector, *tempVecPtr = &tempVector;
    auto tempVector2 = vector, *tempVec2Ptr = &tempVector2;

    std::thread thread1(insertSort<int>, tempVecPtr);
    std::thread thread2(radixSort<int>, tempVec2Ptr, 3);

    std::sort(vector.begin(), vector.end(), [](int x, int y){return x < y;});
    printVector(vector, out);

    thread1.join();
    printVector((*tempVecPtr), out);

    thread2.join();
    printVector((*tempVec2Ptr), out);

    std::cout << "Operation finished" << std::endl;
}