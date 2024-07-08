//1. ARITHMETIC Operators

/* #include<iostream>
using namespace std;

//int main()
//{
//	int i=1;
//	// i=i++ + ++i;  //1 then becomes 2 + incremented already to 2  //4
//	int j=2;
//	int k;
//	  //1 //2  //1   //2   //3   //4
//	k= i + j + i++ + j++ + ++i + ++j;
//	
//	//cout<<i<<endl;
//	cout<<i<<" "<<j<<" "<<" "<<k<<endl;
//	
//	return 0;
//} 

int main()
{
//	int i=0;
//		//0   //0   //1   //1
//	i = i++ - --i + ++i - i--;
//		
//	cout<<i<<endl;
	
	
//	int i=1, j=2, k=3;
//	
//	int m = i-- - j-- - k--;
//	
//	cout<<i<<endl; //0
//	cout<<j<<endl; //1
//	cout<<k<<endl; //2
//	cout<<m<<endl; //-4
	
	
	int i=10, j=20, k;
		//10  //9   //19  //20  //9   //20  //10  //19
	k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
	
	cout<<i<<endl; //10
	cout<<j<<endl; //20
	cout<<k<<endl; //-20
	
	return 0;
}
*/



//2. RELATIONAL Operators
//Input a number n and tell whether it is equal to, less than or more than 10.

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if(n>10){
		cout<<"More than 10 \n";
	}
	else if(n<10){
		cout<<"Less than 10 \n";
	}
	else{
		cout<<"Equal to 10 \n";
	}
	
	return 0;
} */



//3. LOGICAL Operators
//Write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them.

/*#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if(n%2==0 && n%3==0){  //&& returns true only if both inputs are true.
		cout<<"Divisible by both 2 and 3 \n";
	}
	else if(n%2==0){
		cout<<"Divisible by only 2 \n";
	}
	else if(n%3==0){
		cout<<"Divisible by only 3 \n";
	}
		
	return 0;
} */
