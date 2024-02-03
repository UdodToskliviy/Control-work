#include<iostream>

void printTable(int ** array, int height, int width){
	for(int i = 0; i< height; i++){
                for(int j = 0; j < width; j++){
                        std::cout << array[i][j] << " ";
                }
                std::cout << std::endl;
        }
}

void setTable(int ** array, int height, int width){
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			array[i][j] = rand() % 70 + 1;
		}
	}
}

int getDiagonalSum(int ** array, int height, int width){
	int res = 0;
	for(int i = 0; i < height; i++){
		res += array[i][width - i - 1];
	}
	return res;
}

int main(){
	int height = 0;
	int width = 0;
	std::cout << "enter height and width of table split by space" << std::endl;
	std::cin >> height >> width;
	int ** arr = new int* [height];
	for(int i = 0; i < height; i++){
		arr[i] = new int [width];
	}
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			arr[i][j] = 0;
		}
	}

	/*
	printTable(arr, height, width);
	setTable(arr, height, width);
	std::cout << "sum " << getDiagonalSum(arr, height, width) << std::endl;
	printTable(arr, height, width);
	*/

	for(int i = 0; i < height; i++){
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
