//Multiple Languages Robot

/* #include<iostream>
using namespace std;

int main()
{
	char button;
	cout<<"Input a Character: ";
	cin>>button;
	
//	if(button=='a'){
//		cout<<"Hello"<<endl;
//	}
//	else if(button=='b'){
//		cout<<"Namaste \n";
//	}
//	else if(button=='c'){
//		cout<<"Salute \n";
//	}
//	else if(button=='d'){
//		cout<<"Vanakam"<<endl;
//	}
//	else if(button=='e'){
//		cout<<"Welcome \n";
//	}
//	else{
//		cout<<"Still I am learning more \n";
//	}
	
	switch (button)
	{
		case 'a':
			cout<<"Hello"<<endl;
			break;
		case 'b':
			cout<<"Namaste \n";
			break;
		case 'c':
			cout<<"Salute \n";
			break;
		case 'd':
			cout<<"Vanakam \n";
			break;
		case 'e':
			cout<<"Welcome \n";
			break;
			
		default:
		cout<<"Still I am learning more \n";		
			break;	
	}	
	return 0;
} */ 



//Implement a Simple Calculator using Switch

#include<iostream>
using namespace std;

int main()
{
	float n1,n2;
	cout<<"Input 2 numbers of your choice: ";
	cin>>n1>>n2;
	
	char op;
	cout<<"Input an operator of your choice: ";
	cin>>op;
	
	switch(op)
	{
		case '+':
			cout<<n1+n2<<endl;
			break;
		case '-':
			cout<<n1-n2<<endl;
			break;
		case '*':
			cout<<n1*n2<<endl;
			break;
		case '/':
			cout<<n1/n2<<endl;
			break;
			
		default:
			cout<<"Enter another Operator \n";
			break;
	}
	
	return 0;
}
