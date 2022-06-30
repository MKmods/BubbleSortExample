#include <iostream>
template <typename T>
void Swap (T arr[], const size_t a, const size_t b){
    auto temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

template <typename T>
void Sort(T arr[], const size_t size){
    for (size_t i = 0; i < size; ++i)
    {
        bool swapped = false;
        for (size_t j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j+1])
            {
                Swap(arr, j, j+1);
                swapped = true;
            }
        }
        if (!swapped) { break; }
    }
}

int main(){
    int arr[] = {10,9,2,6,3,1,10,5};
    const size_t size = sizeof(arr) / sizeof(arr[0]);

    //print array
    std::cout << "Unsorted Array: ";
    for(auto element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    //sort array
    Sort(arr, size);

    //pring array
    std::cout << "Sorted Array: ";
    for(auto element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}