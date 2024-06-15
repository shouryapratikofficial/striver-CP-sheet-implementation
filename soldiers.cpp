#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

     int k , w;
     long long int n;

     cin>>k>>n>>w;

     long long int total = k*w*(w+1)/2;

     long long int remaining = total - n;

     if (remaining>0){
        cout<<remaining;
     }
     else{
        cout<<"0";
     }

    return 0;
}