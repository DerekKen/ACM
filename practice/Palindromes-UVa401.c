#include <stdio.h>
#include <string.h>
#include <ctype.h>
const char  rev[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
//order of the following 4 strings could be tricky, see "msg[is_mirrored *2 + is_palindrome]"
const char* msg[] = { "not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrome" };

char get_rev(char ch)
{
	if (isalpha(ch))
		return rev[ch - 'A'];
	else //num
		return rev[ch - '0' + 25];//"25" is the offset of numbers in rev[]
}

int main()
{
	char s[32];
	int is_palindrome, is_mirrored;
	while (scanf("%s", s) == 1)//constantly waiting for input
	{
		int len = strlen(s);
		is_palindrome = 1; is_mirrored = 1;
		for (int i = 0; i < (len + 1) / 2; ++i)
		{
			if(s[i] != s[len - 1 - i]) is_palindrome = 0;
			//if (rev[i] != get_rev(s[i])) is_mirrored = 0; rev is a const array 
			if (s[len - 1 - i] != get_rev(s[i])) is_mirrored = 0;
		}
		printf("%s -- is %s.\n", s, msg[is_mirrored * 2 + is_palindrome]);
	}
	return 0;
}