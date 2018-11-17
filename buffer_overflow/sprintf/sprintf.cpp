// [Visual Studio 2012] Disabled GS and ASLR
// Example of Bad Input: AAAAAAAAAAAAAAAAAAAA

#include "stdafx.h"

int my_sprintf(char *src)
{
	char dest[8];

	int n = sprintf(dest, "Formatted: %s", src);
	printf(dest);

	return 0;
}

int main(int argc, char* argv[])
{
	my_sprintf(argv[1]);

	return 0;
}

