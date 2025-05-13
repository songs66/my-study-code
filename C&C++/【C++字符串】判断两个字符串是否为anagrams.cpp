#include<bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1,string str2)
{
    if (str1.length() != str2.length()) 
	{
        return false;
    }
    int count[256] = {0};
    for (int i = 0; i < str1.length(); i++) 
	{
        count[(unsigned char)str1[i]]++;
    }
    for (int i = 0; i < str2.length(); i++) 
	{
        count[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) 
	{
        if (count[i] != 0) 
		{
            return false;
        }
    }
    return true;
}
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if (areAnagrams(str1, str2)) 
	{
        cout << "yes" << endl;
    }
	else 
	{
        cout << "no" << endl;
    }
    return 0;
}
