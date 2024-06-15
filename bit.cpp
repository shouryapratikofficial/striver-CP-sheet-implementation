#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include<math.h>

using namespace std;
int main() {
    int value = 234;
    int digits = log10((float)value) + 1; // Determine the number of digits

    vector<int> digitsVector; // Create a vector to store the digits

    for (int i = digits - 1; i >= 0; i--) {
      cout<<"i is"<<i<<endl;
       
        float divisor = pow(10, i);
        cout<<"divisior is"<<divisor<<endl;
        int digit = value / divisor;
cout<<"digit is"<<digit<<endl; 

        value -= digit * divisor;
cout<<"value is"<<value<<endl;
        // Insert digit into vector
        digitsVector.push_back(digit);
    }

          
    return 0;
}