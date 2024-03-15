#include "Mystring.h"
#include <iostream>

int main()
{
	Mystring empty;
	Mystring s1{ "Lary Hilbik" };
	Mystring s2{ s1 };

	empty.display();
	s1.display();
	s2.display();
	s2 = s1;

	return 0;
}