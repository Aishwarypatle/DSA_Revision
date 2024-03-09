#include <iostream>

using namespace std;

void pattern(int n){
   
   for(int i= 0 ;i < n ; i++){
       for(int j=0; j<i ; j++){
            cout << " " ;
       }
        
       for(int k=1; k<2*n - 2* i ; k++){
            cout << "*" ;
       }
       for(int j=0; j<i ; j++){
            cout << " " ;
       }

        cout <<  endl;
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
// *****
//  ***
//   *