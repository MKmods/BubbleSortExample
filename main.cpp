#include <iostream>

template <typename T>
void PrintArray(const T arr, const int &size) {
    for (auto i = 0; i < size; ++i) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << ", ";
        } else {
            std::cout << "\n";
        }
    }
}

template <typename T>
void Swap(T arr, const int &i, const int &j) {
    auto temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

template <typename T>
void SortArray(T arr, const int &size) {
    // loop through array and push bigger numbers down.
    for (auto i = 0; i < size; ++i) {
        for (auto j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j+1]) { 
                Swap(arr, j, j+1);
            }
        }
    }
}

int main(){
    int arr[] = {10, 5, 3, 1};
    const int size = sizeof(arr) / sizeof(arr[0]);

    // print unsorted array
    std::cout << "Unsorted Array" << std::endl;
    PrintArray(arr, size);
    
    // sort array
    SortArray(arr, size);

    // print sorted array
    std::cout << "Sorted Array" << std::endl;
    PrintArray(arr, size);
}