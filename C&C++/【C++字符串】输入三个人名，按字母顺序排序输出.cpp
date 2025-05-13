#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string names[3]; 
    int i;
    for (i = 0; i < 3; i++) 
	{
        getline(cin, names[i]); 
    }

    sort(names, names + 3);

    for (i = 0; i < 3; i++) 
	{
        cout << names[i] << endl;
    }

    return 0;
}
