#include <iostream>
#include <algorithm>

bool isPalindrome(std::string& str){
    int left = 0;
    int right = str.length() - 1;

    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

bool isPalindromereverse(std::string& str){
    std::string reversedstr = str;
    std::reverse(reversedstr.begin(), reversedstr.end());

    return str == reversedstr;
}

int main(){
    std::string str;
    std::string changedstr;
    std::cout << "Input a string" << std::endl;
    std::cin >> str;

    for(char c : str){
    	changedstr += str[c];
    }

    if(isPalindrome(changedstr) == true){
        std::cout << "Given string is a palindrome" << std::endl;
    }
    else{
        std::cout << "Given string isn't a palindrome" << std::endl;
    }

    if(isPalindromereverse(changedstr) == true){
        std::cout << "Given string is a palindrome" << std::endl;
    }
    else{
        std::cout << "Given string isn't a palindrome" << std::endl;
    }
}
