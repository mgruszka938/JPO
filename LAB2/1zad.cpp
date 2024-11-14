#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> 

int calculateSum(std::vector<std::vector<int>>& matrix){
    int sum = 0;
    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            if(i % 2 == 1 || j % 2 == 0){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    std::srand(static_cast<unsigned int>(time(0)));

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    std::cout << "Matrix:\n";
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            matrix[i][j] = std::rand() % 10; 
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int specialSum = calculateSum(matrix);
    std::cout << "The sum of elements in even columns or odd rows: " << specialSum << std::endl;
}

