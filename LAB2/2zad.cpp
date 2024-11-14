#include <iostream>
#include <algorithm>

std::string strReverse(std::string& str){
    std::string reversedStr = "";
    int n = str.length();

    for(int i=n-1; i>=0; --i){
        reversedStr += str[i];
    }
    return reversedStr;
}

int main(){
    std::string str, reversedStr;
    std::cout << "Type in a string" << std::endl;
    std::getline(std::cin, str);

    reversedStr = strReverse(str);
    std::cout << "Reversed using my function: " << reversedStr << std::endl;

    std::reverse(str.begin(), str.end());
    std::cout << "Reversed using std::reverse(): " << str << std::endl;
    
}
