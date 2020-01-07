#include <stdio.h>
int main()
{
	char str[51], rev[51];
	gets(str);
	int len = 0, i, j = 0;
	while (str[len] != '\0')
		len++;
	for (i = len-1; i >= 0; i--)
	{
		rev[i] = str[j];
		j++;
	}
	rev[len] = '\0';
	printf("%s", rev);
    return 0;
}
