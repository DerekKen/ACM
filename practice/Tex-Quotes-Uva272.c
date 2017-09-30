#include<stdio.h>
int main()
{
	int ch, quote = 1;
	while((ch = getchar()) != EOF)
	{
		if (ch == '"') { printf("%s", quote ? "``" : "''"); quote = !quote; }
		else printf("%c", ch);
	}
	return 0;
}