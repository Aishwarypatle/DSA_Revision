#include <iostream>

using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        int ascii = 65;
        for(int j=0;j<=i;j++){
            cout << static_cast<char>(ascii+j) << " ";
        }
        cout << endl ;
    }
}
// Input: ‘N’ = 3
// Output: 
// A
// A B
// A B C

int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}