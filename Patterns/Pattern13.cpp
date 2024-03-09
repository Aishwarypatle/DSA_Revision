#include <iostream>

using namespace std;

void pattern(int n){
    int num = 0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            num += 1;
            cout  << num;
        }
        cout << endl;
    }
}
// Input: ‘N’ = 3
// Output: 
// 1
// 2 3
// 4 5 6

// Input =  N = 4 :
// 1
// 2 3
// 4 5 6 
// 7 8 9 10

int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}