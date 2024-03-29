#include <stdio.h>

int main()
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		if (i % 2 == 1) {
			printf("%d, ", i);
		} else if (i == 10){
			printf("1/%d", i);
		}
		else{ 
			printf("1/%d, ", i);
		}
	}
	
	getch();
	return 0;
}
