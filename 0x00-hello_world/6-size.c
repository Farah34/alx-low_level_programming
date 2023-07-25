#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
int c;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsiged long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsiged long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsinged long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsinged long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsinged long)sizeof(f));
}

