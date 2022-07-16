#include <initializer_list>
#include <iostream>

void foo(int x)
{
	std::cout << x << " ";
}

int main()
{
	int x{1}, y{3}, z{5};

	for (auto i : { x, y, z, 7, 11, 13 })
		foo(i);
}
