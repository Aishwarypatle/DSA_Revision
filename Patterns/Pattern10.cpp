#include <iostream>

using namespace std;

void pattern(int n){
   
   for(int i= 0 ;i < n ; i++){
        for(int j=0;j<=i ;j++){
            cout <<"*";
        }
        for(int j=1;j<n-i ;j++){
            cout <<" ";
        }
        cout << endl;
   }
   for(int i= 1 ;i < n ; i++){
        for(int j=0;j<n-i ;j++){
            cout <<"*";
        }
        // for(int j=1;j<n-i ;j++){
        //     cout <<"-";
        // }
        cout << endl;
   }

}

// Input: ‘N’ = 3
// Output: 
// *
// **
// ***
// **
// *

int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}
