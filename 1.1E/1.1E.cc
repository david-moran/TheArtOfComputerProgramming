#include <iostream>

template <int m, int n>
struct GCD {
	static const int value = GCD <n, m % n>::value;
};

template <int m>
struct GCD<m , 0> {
	static const int value = m;
};

int main(int argc, char* argv[])
{
	std::cout << GCD<544, 119>::value << std::endl;
	return 0;
}
