#include <iostream>

using namespace std;

void pattern(int n){
   for(int i= 1 ;i <=n ; i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=0;j<2*n-2*i;j++){
            cout << " ";
        }
        for(int j=i;j>0;j--){
            cout << j;
        }
        cout << endl;
   }
}
// Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.
// Given 'N', print the corresponding pattern.
// Example:
// Input: ‘N’ = 3
// Output: 
// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}



// 1                         1
// 1 2                     2 1
// 1 2 3                 3 2 1
// 1 2 3 4             4 3 2 1
// 1 2 3 4 5         5 4 3 2 1
// 1 2 3 4 5 6     6 5 4 3 2 1
// 1 2 3 4 5 6 7 7 6 5 4 3 2 1  