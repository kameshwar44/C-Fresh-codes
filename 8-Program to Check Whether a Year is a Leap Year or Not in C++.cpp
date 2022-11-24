#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%400==0){
		cout<<"Its A Leap Yaer"<<endl;
	}
	else if(n%4==0 && n%100 != 0){
		cout<<"its lEap Year";
	}
	else
	cout << n << " is not a Leap Year";

}


