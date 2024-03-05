#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	//Write your code here
	if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{   int n , x;
    cout << " Enter Number here : " ; cin >> n;
    cout << " Enter Number here : " ; cin >> x;
    cout << gcd(n , x);
    return 0;
}

//put same code in -> https://pythontutor.com/render.html#mode=display