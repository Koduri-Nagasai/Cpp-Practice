//Checking input given number is prime or not

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i;	
	for(i=2; i<n; i++){
		if(n%i==0){
			cout<<"Non Prime Number \n";
			break;
		}
	}
	if(i==n){
		
	}
	
	cout<<"Prime Number"<<endl;
	return 0;
} */



//Printing all the Prime Numbers in given range
//Approach 1


/* #include<iostream>
using namespace std;

int main(){
	
	int a,b,i,num;
	cin>>a>>b;
	
	for(num=a; num<=b; num++){
		for (i=2; i<num; i++){
			if(num%i==0){
				break;
			}
		}
		if(i==num){
			cout<<num<<endl;
		}
	}	
	return 0;
} */


//Approach 2 

/* #include<iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	
	for(int num=a; num<b; num++){
		int i;
		for(i=2; i<num; i++){
			if(num%i==0){
				break;
			}
		}
		if(i==num){
			cout<<num<<endl;
		}
	}
	return 0;
} */
