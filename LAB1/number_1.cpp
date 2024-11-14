#include <iostream>

int main(){
	std::cout << "Input a number" << std::endl;

	int userinput {};
	std::cin >> userinput;

	if(userinput < 0){
		std::cout << "Negative number!" << std::endl;
		return 0;
	}
	
	int sum {};

	for(int i=0; i<=userinput; i++){
		sum += i;
		std::cout << i << std::endl;
	}
	
	std::cout << "Sum: " << sum << std::endl;
}
