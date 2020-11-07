#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int paren(char*);
int main()
{
	char s[201];
	scanf("%s", s);
	printf("%d", paren(s));
}

int paren(char* a)
{
	int index = 0,error = 0,i;
	for (i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) == '(')
		{
			index++;
		}
		else if (*(a + i) == ')')
		{
			if (index != 0)index--;
			else error++;
		}
	}
	error += index;
	return error;
}