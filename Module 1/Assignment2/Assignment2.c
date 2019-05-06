#include <stdio.h>
#include <string.h>
void main()
{
char str[100],res[100];
int i, len, rev = 0;
printf("Enter a string:\n");
scanf("%s",&str);
len = strlen(str);
rev = len - 1;
for (i = 0; i < len; i++) {
res[i] = str[rev];
rev--;
}
res[i] = '\0';
printf("The reverse of the string is:\n%s\n", res);
}
