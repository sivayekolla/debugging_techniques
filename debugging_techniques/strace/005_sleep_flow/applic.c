#include <stdio.h>
#include<unistd.h>
int main() 
{
	int i = 0;
	printf("hello world :)\n");
	while(1) {
		i++;
		printf("Hello %d time\n", i);
		sleep(2);
	}
	return 0;
}


