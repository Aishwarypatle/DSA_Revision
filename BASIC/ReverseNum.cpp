#include <iostream>
using namespace std;


 int reverse(int x) {
        int reverseNum = 0 ;
        while( x != 0){
             if (reverseNum>INT_MAX/10 || reverseNum<INT_MIN/10) return 0; // c
            reverseNum = ( reverseNum * 10 ) + x % 10 ;
            x = x / 10 ;
        }
        return reverseNum;
    }

int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    cout << reverse(n);
    return 0;
}
