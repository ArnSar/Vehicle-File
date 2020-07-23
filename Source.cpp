#include <iostream>
#include <fstream>

#include <iostream>
#include <fstream>
#include "Header.h"
#include <vector>

int main()
{
	std::fstream fs;
	fs.open("Text.txt");
	if (fs.is_open())
	
	std::vector <std::string> myVector;
	{
		while (!fs.eof())
		{
			std::string make;
			int speed;
			std::string type;

			fs >> make;
			std::cout << make << " ";
			fs >> speed;
			std::cout << speed << " ";
			fs >> type;
			std::cout << type << std::endl;
			
			
			myVector.push_back(make);
			
			
			
		}
	}
	std::cout << "The cars profiled were: " << std::endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		std::cout << myVector.at(i) << std::endl;
	}

}

