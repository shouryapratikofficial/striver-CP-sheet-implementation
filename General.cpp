#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {

        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    else
    {
        // If the element is not
        // present in the vector
        cout << "-1" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int ans = 0;
    int input;

    while (n--)
    {

        cin >> input;
        v.push_back(input);
    }
    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());

    cout << getIndex(v, maxi) << endl;
    cout << getIndex(v, mini) << endl;

    ans = getIndex(v, maxi)  + n - 1 ;

    cout << ans;
    return 0;
}