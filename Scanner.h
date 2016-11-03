#include <iostream>
#include <fstream>
#include <string>

enum class Keywords: char{ //enum = constants, class means its scoped, 
	integer = 'int',

};


class Scanner
{
private:
	std::string filename, line; // string
	std::ifstream mainfile; // file operations
public:

	Scanner(const std::string &input) //& = pass by reference in the function context
	{
		filename = input;
		std::cout << filename;
		mainfile.open(filename, std::ios::in);
		if (mainfile.is_open()) {
			while (std::getline(mainfile, line)) {
				std::cout << line << '\n';
				readlines(line);
			}
		}
	}

		void readlines(const std::string &line)
		{

		}

		int * tolkens()
		{
			return 0;
		}
};