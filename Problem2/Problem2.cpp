#include <iostream>

int main(){

	unsigned int Fib1 = 1;
	unsigned int Fib2 = 2;
	unsigned int store = 0;
	unsigned int sum = 0; 
	const unsigned int fourmil = 4000000;

	while(Fib2 <= fourmil) {
		if (Fib2 % 2 == 0){sum += Fib2;}
		
		store = Fib2;
		Fib2 += Fib1;
		Fib1 = store;
		std::cout << Fib2 << std::endl;	
	}

	std::cout << sum << std::endl; 
}
