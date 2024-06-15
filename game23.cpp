#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n, m;
    cin >> n >> m;
    int move = 0;
    int v = m / n;

    if (m == n )
    {
        cout << "0";
        return 0;
    }

    if (m % n != 0 )
    
    {
        cout << "-1";
        return 0;
    }


    while (v % 2 == 0 || v % 3 == 0)
    {
        if (v % 2 == 0)
        {
            v = v / 2;
            move++;
        }

        if (v % 3 == 0)
        {
            v = v / 3;
            move++;
        }

        if (v == 1)
        {
            cout << move;
            return 0;
        }
    }

    cout << "-1";

    return 0;
}