#include<bits/stdc++.h>
using namespace std;
int main() {
    char str[100]; 
    cin >> str;
    int len = strlen(str);
    bool allnum = true;
    for (int i = 0; i < len; i++)
	{
        if (str[i] < '0' || str[i] > '9') 
		{
            allnum = false;
            break;
        }
    }
    if (allnum) 
	{
        int num = 0;
        for (int i = 0; i < len; i++) 
		{
            num = num * 10 + (str[i] - '0'); 
        }
        cout << num + 1 << endl; 
    } 
	else 
	{
        cout << "error" << endl;
    }

    return 0;
}
