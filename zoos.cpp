#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int z = 0, o = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'z')
            z++;
        if (s[i] == 'o')
            o++;
    }
    if (o == 2 * z)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
