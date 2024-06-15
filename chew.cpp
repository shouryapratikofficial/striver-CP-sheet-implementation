#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long value;
    cin >> value;

    vector <int> v;

    int digits = log10((float)value) + 1;

    if(digits!=1){

for (int i = digits - 1; i >= 0; i--) {
	float divisor = pow(10, i);
	long long digit = value / divisor;

	value -= digit * divisor;

	v.push_back(digit);
}




for(int i = 0 ; i <digits ; i++){

    
    if (v[i] > 4 && i==0 && v[i]!=9 )
    {
        
        v[i] = 9 - v[i];

//420062703497
    }
    if (v[i] > 4 && i!=0 )
    {
        
        v[i] = 9 - v[i];


    }
}
long long finalNumber = 0;
for (int i = 0; i < digits; i++) {
    int num = v[i];
    if (num != 0) {
        while (num > 0) {
            finalNumber *= 10;
            num /= 10;
        }
        finalNumber += v[i];
    } else {
        finalNumber *= 10;
    }
}
cout<<finalNumber;
    }
    else{
        cout<<value;
    }
    return 0;
}