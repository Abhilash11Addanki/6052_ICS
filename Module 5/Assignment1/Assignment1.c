#include<stdio.h>
int main()
{
	char str[] = "abhilashabhi";
	char pattern[] = "abhi";
	int index;
	index = rightmostindex(str, pattern);
	printf("The rightmost occurrence is: %d\n", index);
}
int rightmostindex(char s[], char t[])
{
	int i,j,k,res;
	res = 0;
	for(i=0; s[i]!='\0';i++)
	{
		for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++)
		{
			;
		}
		if(k>0 && t[k] == '\0')
		{
			res = i;
		}
	}
	return res;
}
