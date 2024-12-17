#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int hw01(int start, int end) {
    if (start < 10 || start > 99 || end < 10 || end > 99) return -1;

    if (start > end) std::swap(start, end);

    int sum = 0;

    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            sum += (i / 10) + (i % 10);
        }
    }

    return sum;
}

int main() {
    std::cout << hw01(2, 5) << "\n";    
    std::cout << hw01(11, 15) << "\n";  
    std::cout << hw01(2, 11) << "\n";   
    std::cout << hw01(10, 40) << "\n";  
    return 0;
}