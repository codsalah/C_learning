#include <string>

unsigned int strCount(const std::string& word, char letter) {
    unsigned int result = 0; 
  
    for (int i = 0; i < word.length(); i++) 
    { 
        if (word[i] == letter) 
        {
            result += 1;
        }
    }
    return result;
}