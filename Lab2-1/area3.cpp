#include <iostream>
#include <cmath>
#include <stdfloat>
#include <version>

int main()
{	
	#if __STDCPP_FLOAT128_T__ != 1
		#error "128-bit float type required"
	#endif

	std::cout << "Enter the radius and length of a cylinder:" << std::endl;
	std::float128_t radius, length;
	std::cin >> radius >> length;
	
	std::float128_t area = radius * radius * M_PIf128;
	std::float128_t volume = area * length;
	
	std::cout << "The area is " << area << std::endl;
	std::cout << "The volume is " << volume << std::endl;
	return 0;	
}