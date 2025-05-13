#include<bits/stdc++.h>
#define MAX 200000
using namespace std;
 
int main()
{
    int n, i;
    long long c;
    cin >> n >> c;
    long long num[MAX] = {0};
    map<long long, long long> number;
    for( i = 0; i < n; i++)
    {
        cin >> num[i];
        number[num[i]]++;
    }
    long long count = 0;
    for( i = 0; i < n; i++)
    {
       int t = num[i] + c;
       count += number[t];
    }
    cout << count;
    return 0;
}
