#include<stdio.h>
#include<limits.h>
#include<float.h>
void main() {
	printf("The maximum value of char is:%d\n", CHAR_MAX);
	printf("The minimum value of char is:%d\n", CHAR_MIN);
	printf("The maximum value of int is:%d\n", INT_MAX);
	printf("The minimum value of int is:%d\n", INT_MIN);
	printf("The maximum value of long is:%ld\n", LONG_MAX);
	printf("The minimum value of long is:%ld\n", LONG_MIN);
	printf("The maximum value of float is:%.10e\n", FLT_MAX);
	printf("The minimum value of float is:%.10e\n", FLT_MIN);
	printf("The maximum value of double is:%.10e\n", DBL_MAX);
	printf("The minimum value of double is:%.10e\n", DBL_MIN);
}
