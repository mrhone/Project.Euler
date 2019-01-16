#include <iostream>

unsigned Multiples(const unsigned number, const unsigned max){
		return number*(max/number) * ((max/number)+1)/2;
}

int main(){

	const unsigned sum3 = 3;
	const unsigned sum5 = 5;
	const unsigned sum15 =15;

	const unsigned max = 999;
	unsigned result = 0;

	result = Multiples(sum3, max) + Multiples(sum5, max) - Multiples(sum15, max);

	std::cout << result;
	return 0;
}
