// [Visual Studio 2012] Disabled GS and ASLR
// Example of Bad Input: AAAAAAAAAAAAAAAAAAAA

#include "stdafx.h"

int main(int argc, char* argv[])
{
	bool chk;
	char password[8];

    memcpy(password, argv[1], strlen(argv[1]));
    if(strcmp(argv[1], "7eRoM") == 0)
		chk = true;

	if(chk)
		printf("Authenticated!");

	getchar();
	return 0;
}

