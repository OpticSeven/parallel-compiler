#include <iostream>
#include <fstream>
#include <string>

class Scanner
{
private:
	std::string filename, line; // string
	std::ifstream mainfile; // file operations
public:

	Scanner(const std::string& input)
	{
		filename = input;
		std::cout << filename;
		mainfile.open(filename, std::ios::in);
		if (mainfile.is_open()) {
			while (std::getline(mainfile, line)) {
				std::cout << line << '\n';
			}
		}
	}

		void readlines()
		{

		}

		int * tolkens()
		{
			return 0;
		}
};