#include<iostream>
#include<cctype>
#include<string>
using namespace std;

class Solution {
public:
	bool isPalindrome(string s)
	{
		//!!!!string s;
		//transform(str.begin(), str.end(), back_inserter(s), ::tolower);
		for (int i = 0, j = s.length() - 1; i < j; ++i, --j)
		{
			//Find two counterparts
			while (!isalnum(s[i]) && (i < j)) ++i;
			while (!isalnum(s[j]) && (i < j)) --j;
			if (!compare(s[i], s[j])) return false;
		}
		return true;
	}

	bool compare(char a, char b)
	{
		if (a >= 'A' && a <= 'Z')
			a = a - 'A' + 'a';//to lower case
		if (b >= 'A' && b <= 'Z')
			b = b - 'A' + 'a';
		if (a == b) return true;
		else return false;
	}
};

int main()
{
	Solution sln;
	string s = "ab";
	bool p = sln.isPalindrome(s);
	if (p) cout << "true" << endl;
	else cout << "false" << endl;
	cout << "1e3 ==" << 1e3 << endl;
	cout << "10e3 ==" << 10e3 << endl;
	return 0;
}