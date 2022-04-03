#include<stdio.h>
#include<string.h>

int main()
{
	char arr[30];
	int len=0,i=0;

	printf("Enter the Nsme of employee:");
	gets(arr);
	while (arr[i] != '\0')
	{
		len++;
		i++;

	}
	printf("Total number of characters in name:%s are:%d ", arr, len);

	return (0);
}