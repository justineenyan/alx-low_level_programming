#include <stdio.h>
/**
 *main -  printing the size of various datatypes
 *
 *Return: Always 0
 */
int main(void)
{
int number;
char num1;
long long int num;
float num2;
long int num3;

printf("size of an int: %ld bytes\n", sizeof(integerType));
printf("size of float: %ld bytes\n", sizeof(floatType));
printf("size of a long long int : %ld bytes\n", sizeof(longlongintType));
printf("size of char: %ld bytes\n", sizeof(charType));
printf("size of a long int: %ld bytes\n", sizeof(longintType));
return (0);
