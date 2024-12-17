#include <iostream>
#include <vector>

int hw04(const int* input_array, std::size_t elem_count) {
    
    if (!input_array || elem_count == 0) {
        return 0;
    }

    std::vector<int> out_data; 
    int sum = 0; 

    
    for (std::size_t i = 0; i < elem_count; ++i) {
        if (input_array[i] < 0) {
            break;         }
        out_data.push_back(input_array[i]); 
    }

  
    for (int num : out_data) {
        sum += num;
    }

    return sum; 
}

int main() {
   
    int arr1[] = {11, 0, -22, 33, -1};
    std::cout << hw04(arr1, 5) << std::endl;
    int arr2[] = {1, 2, 3, -1};
    std::cout << hw04(arr2, 4) << std::endl; 
    int arr3[] = {'A', -1, 'B', 'C', 'T'};
    std::cout << hw04(arr3, 5) << std::endl; 
    return 0;
}