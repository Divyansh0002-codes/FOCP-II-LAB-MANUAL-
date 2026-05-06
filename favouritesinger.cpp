#include <iostream>
using namespace std;
int main()
{
    int n;
    int freq[1000], N[1000];
    ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        int c = 0;
        for (int j = 0; j <= n - 1; j++)
        {
            if (N[i] == N[j])
                c++;
        }
        freq[i] = c;
    }
    int max = freq[0];
    for (int i = 0; i < n; i++)
    {
        if (max < freq[i])
            max = freq[i];
    }
    cout << max;
    return 0;
}
