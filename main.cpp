//! (c) 2019, Debanga Raj Neog
#include<iostream>
#include <chrono>

#include "Problems.h"

using namespace std::chrono;

int main(int argc, char *argv[]) {

	// 1. Fibonacci
	const int size = 4;
	int32_t index[size] { 0, 2, 13, 35};
	std::cout << "Output of Fibonacci sequence, for a few examples: " << std::endl;

	// Recursive: so slow for big numbers!
	for (int i = 0; i < size; ++i) {
		std::cout << "Fibonacci(" << index[i] << "): ";
		auto start = high_resolution_clock::now();
		int result = algod::Fibonacci_Recursive(index[i]);
		auto finish = high_resolution_clock::now();
		std::cout << result << ", Time (s): " << static_cast<std::chrono::duration<double>>(finish - start).count() << std::endl;
	}
	
	// Dynamic Programming solution
	for (int i = 0; i < size; ++i) {
		std::cout << "Fibonacci_DP(" << index[i] << "): ";
		auto start = high_resolution_clock::now();
		int result = algod::Fibonacci_DP(index[i]);
		auto finish = high_resolution_clock::now();
		std::cout << result << ", Time (s): " << static_cast<std::chrono::duration<double>>(finish - start).count() << std::endl;
	}


	return 0;
}