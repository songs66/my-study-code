#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m; 

    int a[n]; 
    for (int i = 0; i < n; i++)
	{
        cin >> a[i]; 
    }

    int queries[m]; 
    for (int i = 0; i < m; i++) 
	{
        cin >> queries[i]; 
    }

    for (int i = 0; i < m; i++) 
	{
        int q = queries[i];
        int left = 0, right = n;
        int result = -2; 

        while (left < right) 
		{
            int mid = left + (right - left) / 2;
            if (a[mid] < q) 
			{
                left = mid + 1;
            } 
			else 
			{
                right = mid;
                result = mid + 1; 
            }
        }

        if (result != -2 && a[result - 1] == q) 
		{
            cout << result << " "; 
        } 
		else 
		{
            cout << -1 << " "; 
        }
    }
    cout << endl;

    return 0;
}
