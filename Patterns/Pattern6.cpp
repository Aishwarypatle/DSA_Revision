#include <iostream>

using namespace std;

void pattern(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j= 1 ; j <= n - i ; j++){
            cout << j ;
        }
        cout << endl;
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

// 1 2 3
// 1 2
// 1