#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    char room[n];
    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> room;

        int arr[2][n];

        for (int i = 0; i < n; i++)
        {
            arr[1][i] = room[i] = true;
            arr[2][i] = room[i] = true;
        }
        int i, j, count = 0;
        while (true)
        {
            if (arr[i][j] == 0 && arr[i][j] == true)
            {
                if (j != n)
                    j++;
                count++;
                arr[1][j] = false;
                arr[2][j] = false;
            }
            if (arr[i][j] == 1 && arr[i][j] == true)
            {
                if (i == 1)
                    i++;
                i--;
                count++;
                arr[1][j] = false;
                arr[2][j] = false;
            }
        }
    }

    return 0;
}