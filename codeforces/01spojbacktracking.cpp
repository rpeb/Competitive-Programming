#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int *badptr=NULL;
	srand(time(NULL));
	while(1)
	{
		if(rand()%200 == 13) *badptr=10;
		printf("Random: %d", rand()%200);
	}
	return 0;
}

