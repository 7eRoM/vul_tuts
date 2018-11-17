// [Visual Studio 2012] Disabled GS and ASLR
// Example of Bad Input: AAAAAAAAAAAAAAAAAAAA

#include "stdafx.h"

int main(int argc, char* argv[])
{
	bool chk;
	char input[8];

	printf("input: ");
	scanf("%s", &input);
	if(strcmp(input, "7eRoM") == 0)
		chk = true;

	if(chk)
		printf("Authenticated!");

	getchar();
	return 0;
}

