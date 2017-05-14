#include<stdio.h>

void print(int i)
{
	int first, second;
	
	if(i < 100){
		first = i - (i / 10) * 10;
		second = i / 10;
		printf("The 1st integer of the number is: %d\n", first);
		printf("The 2nd integer of the number is: %d\n", second);
	}
}

int main(void)
{
	int i;
	printf("Please input an integer < 100: ");
	scanf("%d", &i);
	print(i);
	return 0;
}