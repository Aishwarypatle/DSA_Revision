#include <iostream>
using namespace std;

void pattern(int n){
    // return n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*"  ;
        }
        cout << endl ;
    }
    
}

int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}


// Input: ‘N’ = 3

// Output: 
// * * *
// * * *
// * * *