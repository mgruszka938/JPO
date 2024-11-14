#include <iostream>

int main(){
	const int array_num = 5;
	int array[array_num] = {0};
	
	for(int i=0; i<array_num; i++){
		std::cin >> array[i];
	}
	
	for(int i=0; i<array_num; i++){
		std::cout << "Number " << i << ": " << array[i] << std::endl;
	}
	
}
