#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand() % 100 + 1;
	int guess;

	do{
		std::cout << "Guess a number from 1 to 100" << std::endl;
		std::cin >> guess;

		if(guess < randomNumber){
			std::cout << "Too low" << std::endl;
		}
		else if(guess > randomNumber){
			std::cout << "Too high" << std::endl;
		}
		else{
			std::cout << "You guessed correctly" << std::endl;
		}
	
	}while(guess != randomNumber);
}
