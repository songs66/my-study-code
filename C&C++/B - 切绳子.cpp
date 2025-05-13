#include<bits/stdc++.h>
using namespace std;

double gcd(double a, double b) {
    if (b == 0) return a;
    return gcd(b, fmod(a, b));
}

double findMaxLength(vector<double>& lengths, int K) {
    double max_length = lengths[0];
    for (size_t i = 1; i < lengths.size(); ++i) {
        max_length = gcd(max_length, lengths[i]);
    }

    double result = max_length;
    int count = 0;
    for (size_t i = 0; i < lengths.size(); ++i) {
        count += lengths[i] / max_length;
    }
    
    if (count < K) {

        double low = 0, high = max_length;
        while (low < high) {
            double mid = (low + high) / 2;
            int temp_count = 0;
            for (size_t i = 0; i < lengths.size(); ++i) {
                if (lengths[i] >= mid) {
                    temp_count += lengths[i] / mid;
                }
            }
            if (temp_count >= K) {
                result = mid;
                high = mid;
            } else {
                low = mid + 1e-03; 
            }
        }
    }
    
    return result;
}

int main() 
{
    int N, K;
    cin >> N >> K;
    vector<double> lengths(N);
    for (int i = 0; i < N; ++i) {
        cin >> lengths[i];
    }
    
    double result = findMaxLength(lengths, K);
    cout << fixed << setprecision(2) << result << endl;
    
    return 0;
}
