#include "CArray.h"
#include <iostream>
#include <stdexcept>

template <typename TData> void print_array(const CArray<TData> &_array) {
	std::cout << std::endl << "Array contains " << _array.size() << " elements" << std::endl << std::endl;
	for (unsigned int i = 0; i < _array.size(); i++) {
		std::cout << _array[i] << " ";
	}
	std::cout << std::endl << std::endl << "-----" << std::endl;
}

int main() {
	CArray<int> array;
	//print_array(array);
	//array.push_back(5);
	//array.push_back(7);
	//print_array(array);
	//array.clear();
	//print_array(array);

	print_array(array);

	//array.push_back(1);
	//array.push_back(2);
	//array.push_back(3);
	//array.push_back(4);
	array.push_back(5);
	array.push_back(6);

	//print_array(array);

	//array.erase(10);
	//print_array(array);
	//array.erase(0);
	//print_array(array);

	try {
		//array.insert(15, 5);
		//array.insert(3, 7);
		//array.insert(0, 0);
		array.insert(0, 0);
		array.insert(0, 1);
		array.insert(1, 2);
		print_array(array);
		array.clear();
		print_array(array);
	}
	catch (std::out_of_range& ex) {
		std::cout << ex.what();
	}
}
