#include <iostream>
#include <cctype>

int main(){
    std::string sentence;
    char character;

    std::cout << "Input a sentence:" << std::endl;
    std::getline(std::cin, sentence);

    std::cout << "Input a character:" << std::endl;
    std::cin >> character;

    char lowercasechar = std::tolower(character);

    int count = 0;

    for(char c : sentence){
        if(std::tolower(c) == lowercasechar){
            ++count;
        }
    }

    std::cout << "Character " << character << " occurs " << count << " times in this sentence." << std::endl;
}
