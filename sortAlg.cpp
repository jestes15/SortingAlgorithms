template <typename T> void insertSort(std::vector<T>* vector)
{
    for (int i = 0; i < vector->size(); i++)
    {
        int j = i;
        while (j > 0 && (*vector)[j] < (*vector)[j-1])
        {
            T temp = (*vector)[j];
            (*vector)[j] = (*vector)[j-1];
            (*vector)[j-1] = temp;
            j--;
        }
    }
}

template <typename T> void printVector(std::vector<T> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        if (i == 0) 
        {
            std::cout << "[ " << vector[i] << ", ";
        }
        else if (i != (vector.size() - 1)) {
            std::cout << vector[i] << ", ";
        }
        else
        {
            std::cout << vector[i] << " ]" << std::endl;
        }
    }
}

template <typename T> void radixSort(std::vector<T>* vector, int max)
{
    int i, j, m, p = 1, index, temp, count = 0;
    std::list<int> pocket[10];
    int n = vector->size();

    for(i = 0; i< max; i++) {
        m = pow(10, i+1);
        p = pow(10, i);
        for(j = 0; j<n; j++) {
            temp = (*vector)[j]%m;
            index = temp/p;
            pocket[index].push_back((*vector)[j]);
        }

        count = 0;
        for(j = 0; j<10; j++) {
            while(!pocket[j].empty()) {
                (*vector)[count] = *(pocket[j].begin());
                pocket[j].erase(pocket[j].begin());
                count++;
            }
        }
    }
}