#include <iostream>

#include "mathUtils.h"
#include "advancedMath.h"

int main(){
	int a = 3;
	int b = 4;

	// do addition through mathUtils
	std::cout << "a + b = " << MathUtils::add(a, b) << std::endl;
	
	// do subtraction multiplication through mathUtils
	std::cout << "a * b = " << MathUtils::multiply(a, b) << std::endl;	
	
	// do square using advancedMath
	std::cout << "square(a) = " << AdvancedMath::square(a) << std::endl;

	return 0;
}
