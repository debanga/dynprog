//! (c) 2019, Debanga Raj Neog
#include "Problems.h"

namespace algod {	
	int32_t Fibonacci_Recursive(int32_t n) {
		assert(n != 0);
		// Base case
		if (n == 1 | n == 2) {
			return 1;
		}
		else {
			return Fibonacci_Recursive(n - 1) + Fibonacci_Recursive(n - 2);
		}
	}

	int32_t Fibonacci_DP(int32_t n) {
		assert(n != 0);
		std::vector<int> fibo(n);
		// Base case
		fibo[0] = 1;
		if (n > 1) {
			fibo[1] = 1;
			if (n > 2) {
				for (int i = 2; i < n; ++i) {
					fibo[i] = fibo[i - 1] + fibo[i - 2];
				}
			}
		}
		return fibo[n-1];	
	}
}