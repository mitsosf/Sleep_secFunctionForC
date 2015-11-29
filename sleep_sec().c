#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // Used in lines 10 and 13



void sleep_sec(int seconds){
	int x,y;
	x=0;
	y=time(NULL);  //Using time(NULL) function to count in seconds and make it system-independent
	
	while((x-y)<seconds) //Counting
		x=time(NULL);
		
}

int main(int argc, char *argv[]) {  //test
	printf("Hello,");
	sleep_sec(5);
	printf(" world!\n");
	system("pause");
	return 0;
}
