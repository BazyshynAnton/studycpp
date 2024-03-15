#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>

class Mystring
{
	private:
		char* my_string;

	public:
		Mystring();
		Mystring(const char*);
		Mystring(const Mystring&);
		~Mystring();

		void display() const;
		int get_length() const;
		const char* get_string() const;
};

#endif 
