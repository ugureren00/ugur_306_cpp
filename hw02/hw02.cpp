#include <string>
#include <iostream>

std::string removeDuplicates(std::string input) {
    for (size_t i = 0; i < input.size(); ++i) {
        for (size_t j = i + 1; j < input.size(); ) {
            if (input[i] == input[j]) {
                input.erase(j, 1); 
            } else {
                ++j; 
            }
        }
    }
    return input;
}

int main() {
    
    std::cout << removeDuplicates("Hello") << std::endl;        
    std::cout << removeDuplicates("AABBCC") << std::endl;      
    std::cout << removeDuplicates("!HHWW02COMPLLETEE!") << std::endl; 
    return 0;
}


