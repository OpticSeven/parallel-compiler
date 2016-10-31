#pragma once
#include <stdio.h>
#include <string>

using namespace std;

int main(void)
{
	int j;
	char buffer[200];
	j = sprintf_s(buffer, 200, "This is a String\n");
	printf_s(buffer, j);

	return 0;
}