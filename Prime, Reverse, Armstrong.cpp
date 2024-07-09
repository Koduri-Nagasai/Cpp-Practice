//Prime or Not

/* #include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	bool flag;
	
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			cout<<"Number is Non-Prime \n";
			flag=1;
			break;
		}
	}
	
	if(flag==0){
		cout<<"Prime No \n"; 
	}
	
	return 0;
} */


//Reverse a Number

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int reverse;
	
	while(n>0){
		int lastdigit= n%10;
		reverse = reverse*10 + lastdigit;
		n=n/10;
	}
	
	cout<<reverse<<endl;
	
	return 0;
} */


//Armstrong Number

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int sum=0;
	int originalno = n;
	
	while(n>0){
	int lastdigit = n%10;
	sum+= pow(lastdigit,3);
	n=n/10;
	}
	
	if(sum==originalno){
		cout<<"Armstrong Number"<<endl;
	}
	else{
		cout<<"Not an Armstrong Number"<<endl;
	}
	
	return 0;
}








