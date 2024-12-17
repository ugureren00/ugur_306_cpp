#include <cstring>
#include <iostream>

void removePattern(char* str, const char* pattern) {
    
    if (!str || !pattern) {
        return;
    }

    
    if (*str == '\0' || *pattern == '\0') {
        return;
    }

    size_t patternLength = std::strlen(pattern);
    char* currentPos = str;

    
    while (*currentPos != '\0') {
        char* tempPos = currentPos;
        const char* tempPattern = pattern;

        while (*tempPos != '\0' && *tempPattern != '\0' && *tempPos == *tempPattern) {
            ++tempPos;
            ++tempPattern;
        }

        
        if (*tempPattern == '\0') {
            std::memmove(currentPos, tempPos, std::strlen(tempPos) + 1); 
            return;
        }

        ++currentPos;
    }
}

int main() {
    char str1[] = "Hello_World";
    removePattern(str1, "World");
    std::cout << str1 << std::endl; 

    char str2[] = "START_TEXT_END";
    removePattern(str2, "TEXT");
    std::cout << str2 << std::endl; 

    char str3[] = "START_TEXT_END";
    removePattern(str3, "BEGIN");
    std::cout << str3 << std::endl; 

    char str4[] = "";
    removePattern(str4, "aabbcc");
    std::cout << str4 << std::endl; 

    char str5[] = "A";
    removePattern(str5, "A");
    std::cout << str5 << std::endl; 

    return 0;
}
