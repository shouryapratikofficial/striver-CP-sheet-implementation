#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

int row,column;

int matrix[5][5];

for(int i=0; i<5; i++){
    
for(int j=0; j<5; j++){
    
cin>>matrix[i][j];

}


}



for(int i=0; i<5; i++){
    
for(int j=0; j<5; j++){
    
if (matrix[i][j] == 1){
row=i; column=j;
}
}


}

int ans = abs(row-2) + abs(column-2);


cout<<ans;
    return 0;
}