#include <stdio.h>
/**
  *main - Entry point
  *Return: 0 (Success)
  */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %d byte(s)", sizeof(char));
printf("size of an int: %d byte(s)", sizeof(int));
printf("size of a long int: %d byte(s)", sizeof(long int));
printf("size of a long long int: %d byte(s)", sizeof(long long int));
printf("size of a float: %d byte(s)", sizeof(float));
return (0);
}

