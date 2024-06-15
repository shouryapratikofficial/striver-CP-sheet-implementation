#include<iostream>
 #include<bits/stdc++.h>

using namespace std ;

int main()
{
    

   int n, k, l, c, d, p, nl, np ;

   cin>>n>>k>>l>>c>>d>>p>>nl>>np;

  int  totalsoda = k*l;
  int total1 = totalsoda/nl;

  int totalSlice = c*d;
  int total2= totalSlice;

  int total3= p/np;

 int minimum = min({total1,total2,total3})/n;

   cout<<minimum<<endl;



    return 0 ;
}