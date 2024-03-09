#include <iostream>

using namespace std;

void pattern(int n){
   int k = 1;
   for(int i= 0 ;i < n ; i++){
        if(i%2 == 0){
            k = 1;
        }else{
            k=0;
        }
        for (int j = 0; j <=i ; j++)
        {
            cout << k;
            k = 1- k;
        }
        
        cout << endl;
   }
}
// Input: ‘N’ = 3
// Output: 
// 1
// 0 1
// 1 0 1


int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}
