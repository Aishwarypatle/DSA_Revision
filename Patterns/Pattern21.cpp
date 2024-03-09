#include <iostream>

using namespace std;

void pattern(int n){
    // for(int i=0;i<n;i++){
    //     cout << "*" ;
        
    // }
    // cout << endl;
    // for(int i=0;i<n-2;i++){
    //     for (int j = 0; j < 1; j++)
    //     {
    //         cout << "*" ;
    //     }
    //     for (int j = 0; j < n-2; j++)
    //     {
    //         cout << " " ;
    //     }
    //     for (int j = 0; j < 1; j++)
    //     {
    //         cout << "*" ;
    //     }
        
    //     cout << endl;
    // }
    // for(int i=0;i<n;i++){
    //     cout << "*" ;
        
    // }
     cout << string(n, '*') << endl;

    // Middle rows
    string middleRow = "*" + string(n - 2, ' ') + "*";
    for (int i = 0; i < n - 2; i++) {
        cout << middleRow << endl;
    }

    // Last row
    cout << string(n, '*') << endl;
}

// Input: ‘N’ = 4
// Output: 
// ****
// *  *
// *  *
// ****
// Input: ‘N’ = 5
// Output: 
// *****
// *   *
// *   *
// *   *
// *****


int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}