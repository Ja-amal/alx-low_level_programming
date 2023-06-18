#include <stdio.h>

/**
 * main - Write a C program that prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
int y;
long z;
long long a;
float b;
printf("Size of a char:%Id byte(s)\n",sizeof(x));
printf("Size of an int:%Id byte(s)\n",sizeof(y));
printf("Size of a long int:%Id byte(s)\n",sizeof(z));
printf("Size of a long long int:%Id byte(s)\n",sizeof(a));
printf("Size of a float:%Id byte(s)\n",sizeof(b));
return (0);
}
