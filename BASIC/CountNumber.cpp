#include <iostream>
using namespace std;

//solution first using basic approach modulo and divide rule 
int countDigits1(int n){

    int count = 0 ;
    while( n != 0){
        n = n/10;
        count++;
    }
    return count;
}


//solution 2 by converting the number to string and getting it's length
int countDigits2(int n){
    string str  =  to_string(n);
    return str.length();
}


int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    cout << countDigits1(n);
    return 0;
}
