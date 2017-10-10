#include <iostream>
using namespace std;
const int N = 10;
bool isPalindrome(int x)  
{
	if (x < 0) return false;
	//forgot that all digits but the top one could be '0'!
	int digits[N] = { x % 10, x / 10, x / 100, x / 1e3,  x / 1e4, x / 1e5, x / 1e6, x / 1e7, x / 1e8, x / 1e9}, i = 1;
	int len = 1;
	for (int i = 0; i < N - 1;)
		if (digits[++i]) len = i + 1; // start from [1]

	for (int j = 0; j < (len + 1) / 2; ++j)
		if (digits[j] != digits[len - 1 - j]) return false;
	return true;
}

int main()
{
	if (isPalindrome(-101)) cout << "true" << endl;
	else  cout << "false" << endl;

	return 0;
}