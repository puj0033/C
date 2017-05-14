#include<stdio.h>
#include<math.h>

int main(void)
{
	int i, j, a;
	a = 0;
	for(i = 1; i <= 100; i++){
			for(j = 2; j < i; j++){
			 if(i % j == 0)
					break;
			}
			if(i == j)
				printf("%d is a prime.\n", i);
			else
				printf("%d is not a prime.\n", i);
	}
	return 0;
}