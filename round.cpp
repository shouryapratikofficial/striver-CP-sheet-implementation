#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int t, length;
    int p;
    cin >> t;
    while (t--)
    {
        char num[10000];
        cin >> num;

        length = strlen(num);
        p = strlen(num);
        cout << length << endl;
        for (int i = 0; i < length; i++)
        {
            p--;
            cout << (float)num[i] * pow(10, p) << " ";
        }

        cout << endl;
    }
    return 0;
}
