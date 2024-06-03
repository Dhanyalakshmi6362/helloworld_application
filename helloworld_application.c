#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "helloworld_application.h"

int main(int argc,char* argv[])
{
	
	//To print the version of the application
	if(argc==2 && (strcmp(argv[1],"--version")==0 || strcmp(argv[1],"-V")==0))
	{
		printf("helloworld version: %d.%d.%d\n",VERSION_MAJOR,VERSION_MINOR,VERSION_PATCH);
		return 0;
	}
	printf("Hello World!\n");
	sleep(10);

        // Intentionally create a crash in this application
    
        int *ptr = NULL,variable = 8;
    
        // Attempt to dereference a NULL pointer and assign the address of 'variable' to it, which will cause a segmentation fault
       *ptr = &variable;
       return 0;
}
