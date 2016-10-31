#include <iostream>
#include <fstream>
#include <string>

class Scanner
{
private:
	 std::string filename;
	 std::ifstream mainfile;
	public:

		Scanner(const std::string& input)
		{
			filename = input;

		}

		void readlines()
		{

		}

		int * tolkens()
		{
			return 0;
		}
};