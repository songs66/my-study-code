#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string text;
    getline(cin, text);
    int len = text.length();
    int wordCount = 0;
    int totalLength = 0;
    int start = 0;

    for (int i = 0; i <= len; i++) 
	{
        if (i == len || text[i] == '.' || text[i] == ',' || text[i] == ' ') 
		{
            if (i - start > 0) 
			{
                wordCount++;
                totalLength += i - start;
            }
            start = i + 1;
        }
    }
    double averageLength = wordCount > 0 ? static_cast<double>(totalLength) / wordCount : 0;
    cout << fixed << setprecision(1) << averageLength << endl;

    return 0;
}
