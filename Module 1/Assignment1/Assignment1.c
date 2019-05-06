#include<stdio.h>
void main()
{
	int ch, lastch;
	lastch = '!';
	while((ch = getchar())!=EOF)
	{
		if (ch == ' ')
		{
			if(lastch!= ' ')
			{
				putchar(ch);
			}
		}
		else
		{
			putchar(ch);
		}
	lastch = ch;
	}
}
