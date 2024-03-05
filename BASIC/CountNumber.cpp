#include <iostream>
using namespace std;

int countDigits(int n){

    int count = 0 ;
    while(n>0)
    {
        int lastDigit = n % 10;
        n = n/10;
        count++;
    }
    return count;
}
int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    cout << countDigits(n);
    return 0;
}
