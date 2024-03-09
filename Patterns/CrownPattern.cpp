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

// Input: length = 25
// Output:

// #           #           #
// ##         ###         ##
// ###       #####       ###
// ####     #######     ####
// #####   #########   #####
// ###### ########### ######
// #########################
// #########################
// #########################
// #########################

int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}
// *************************