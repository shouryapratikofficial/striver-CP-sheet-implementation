#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{


int x1,x2,x3;

cin>>x1>>x2>>x3;

int mini = min({x1,x2,x3});
int maxi = max({x1,x2,x3});

int ans = maxi - mini ;
cout<<ans;
    return 0;
}