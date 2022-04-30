// Marcus King
// 4/29/2022
//CIS 1202.501

#include <cmath>
#include<iostream>

template <typename T>
T half(T num)
{
	T result = num / 2.0;

	return result;
}

int half(int num);

int main()
{
	double a = 7.5;
	float b = 5.0f;
	int c = 3;

	std::cout << "half of " << a << " is " << half(a) << '\n';
	std::cout << "half of " << b << " is " << half(b) << '\n';
	std::cout << "half of " << c << " is " << half(c) << '\n';
}

int half(int num)
{
	int result = std::round(static_cast<float>(num) / static_cast<float>(2));

	return result;
}