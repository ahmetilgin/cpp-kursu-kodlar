#include <ostream>

std::ostream& print(std::ostream& os, int x, int y)
{
	return os << x << " " << y << "\n";
}

#include <functional>
#include <iostream>

int main()
{
	using namespace std;
	using namespace placeholders;

	print(cout, 10, 20);
	auto f = bind(print, ref(cout), _1, _2);
	f(10, 20);
}






