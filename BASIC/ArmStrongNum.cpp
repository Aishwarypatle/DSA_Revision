#include <iostream>
#include <cmath>
using namespace std;


bool checkArmstrong(int n){
	//Write your code here
	int originalNum= n ;
	int num = n;
	int armNum = 0;
	int count = 0;
	while(n != 0){
		n = n/10;
		count++;
	}
	while(num != 0){
		int lastDigit = num%10;
		num /=10;
		armNum += pow(lastDigit , count);
	}
	return (armNum == originalNum);
}


int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    cout << checkArmstrong(n);
    return 0;
}
