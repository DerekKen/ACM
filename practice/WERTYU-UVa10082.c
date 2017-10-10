#include <stdio.h>

//note that counter slash "\" is an escape character "\\"
char key_mapping[] = { "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./" };

int main()
{
	char c;
	int i;
	while ((c = getchar()) != EOF)
	{
		for (i = 0; key_mapping[i] && key_mapping[i] != c; ++i);
		if (key_mapping[i]) printf("%c", key_mapping[i - 1]); //putchar(char c) is preferred
		else printf("%c", key_mapping[i]);//putchar(char c) is preferred
	}
	return 0;
}