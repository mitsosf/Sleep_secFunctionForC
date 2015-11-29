#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void sleep_sec(int seconds){
	int x,y;
	x=0;
	y=time(NULL);
	
	while((x-y)<seconds)
		x=time(NULL);
		
}

int main(int argc, char *argv[]) {
	printf("Geia");
	sleep_sec(5);
	printf(" sou\n");
	system("pause");
	return 0;
}
