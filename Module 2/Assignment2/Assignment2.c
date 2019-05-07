#include<stdio.h>
#include<string.h>
int hexadecimaltodecimal(char arr[])
{
	int len = strlen(arr);
	int base = 1;
	int res = 0;
	for(int i = len - 1; i >= 0; i--) {
		if (arr[i]>='0' && arr[i]<='9') {
			res += (arr[i] - 48)*base;
			base *= 16;		
		}
		else if (arr[i]>='A' && arr[i]<='F')
		{
			res += (arr[i] - 55)*base;
			base *= 16;		
		}
	}
	return res;
}
int main() {
	char arr[] = "21B";
	printf("The hexadecimal value of %s in decimal is %d\n", arr, hexadecimaltodecimal(arr));
}
