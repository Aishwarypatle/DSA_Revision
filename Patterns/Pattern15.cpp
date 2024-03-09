#include <iostream>

using namespace std;

void pattern(int n){
   for(int i=n;i>0;i--){
        int ascii = 65;
        for(int j=0;j<i;j++){
            cout << static_cast<char>(ascii+j) << " ";
        }
        cout << endl ;
    }
}
// Input: ‘N’ = 3
// Output: 
// A B C
// A B
// A 

int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}