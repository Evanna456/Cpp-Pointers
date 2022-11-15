#include <iostream>

void applyAll(int array1[], size_t array1_size, int array2[], size_t array2_size);

int main()
{
	int array1[] = { 1, 2, 3, 4, 5 };
	int array2[] = { 10, 20, 30 };
	size_t array1_size = 5;
	size_t array2_size = 3;
	applyAll(array1, array1_size, array2, array2_size);
	std::cout << std::endl << "Press any key to exit the console...";
	std::cin.ignore();
	std::cin.get();
	return 0;
}

void applyAll(int array1[], size_t array1_size, int array2[], size_t array2_size) {
	int* result_ptr = nullptr;
	size_t total_size = array1_size * array2_size;
	result_ptr = new int[total_size];
	int position = 0;
	for (size_t it = 0; it < array1_size; it++) {
		for (size_t ix = 0; ix < array2_size; ix++) {
			result_ptr[position] = array1[it] * array2[ix];
			position++;
		}
	}
	for (size_t iy = 0; iy < total_size; iy++) {
		std::cout << result_ptr[iy] << " ";
	}
	delete[] result_ptr;
}