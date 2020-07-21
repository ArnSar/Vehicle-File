#include <iostream>
#include <fstream>

#include <iostream>
#include <fstream>
#include "Header.h"

int main()
{
	std::fstream fs;
	fs.open("Text.txt");
	if (fs.is_open())
	{
		while (!fs.eof())
		{
			std::string x;
			fs >> x;
			std::cout << x << " ";
		}
	}
}