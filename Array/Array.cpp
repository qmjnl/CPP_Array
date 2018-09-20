#include "CArray.h"
#include <random>
#include <iostream>

template <typename TData> void print_array(const CArray<TData> &_array) {
	std::cout << std::endl << "Array contains " << _array.size() << " elements" << std::endl << std::endl;
	for (unsigned int i = 0; i < _array.size(); i++) {
		std::cout << _array[i] << " ";
	}
	//std::cout << std::endl << std::endl << "-----" << std::endl;
}

int main() {
	std::random_device device;
	std::mt19937 engine(device());
	std::uniform_int_distribution<unsigned int> distribution(0, 9);

	for (int i = 1; i <= 10; i++) {
		CArray<int> data;
		unsigned int count = distribution(engine);
		for (unsigned int i = 0; i < count; i++) {
			data.push_back(distribution(engine));
		}

		print_array(data);
		data.sort();
		print_array(data);
		std::cout << "*****" << std::endl;
	}
}
