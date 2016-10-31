#pragma once
#include <stdio.h>
#include <string>
#include <Scanner.h>

using namespace std;

int main(void)
{
	int j;
	string test_file ("C:\\Users\\nickd\\OneDrive\\Documents\\Projects\\parallel-compiler\\test.txt");
	char buffer[200];
	
	Scanner Scan(test_file);

	j = sprintf_s(buffer, 200, "This is a String\n");
	printf_s(buffer, j);

	return 0;
}