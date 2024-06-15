#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long ans = 0;
    long long n;
    cin >> n;
    

    while (n--)
    {
     string string;
        cin >> string;

        if (string == "Tetrahedron")
        {
            ans += 4;
        }

        if (string == "Cube")
        {
            ans += 6;
        }

        if (string == "Octahedron")
        {
            ans += 8;
        }

        if (string == "Dodecahedron")
        {
            ans += 12;
        }

        if (string == "Icosahedron")
        {
            ans += 20;
        }
    }

    cout << ans;

    return 0;
}