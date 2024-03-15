#include "Mystring.h"

Mystring::Mystring()
	:my_string{nullptr}
{
	my_string = new char[1];
	*my_string = '\0';
}

Mystring::Mystring(const char* str)
	:my_string{nullptr}
{
	if (str == nullptr)
	{
		my_string = new char[1];
		*my_string = '\0';
	}
	else
	{
		my_string = new char[std::strlen(str) + 1];
		std::strcpy(my_string ,str);
	}
}

Mystring::Mystring(const Mystring& source)
	:my_string{nullptr}
{
	my_string = new char[std::strlen(source.my_string) + 1];
	std::strcpy(my_string, source.my_string);
}

Mystring::~Mystring()
{
	delete [] my_string;
}

void Mystring::display() const
{
	std::cout << my_string << " : " << get_length() << std::endl;
}

int Mystring::get_length() const { return std::strlen(my_string); }

const char* Mystring::get_string() const { return my_string; }