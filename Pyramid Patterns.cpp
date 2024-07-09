// Inverted Pyramid
// * * * * *
// * * * *
// * * *
// * *
// *

/* #include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}	
	return 0;
} */


// Half Pyramid after 180° rotation

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<=n-i){
				cout<<"  ";
			}
			else{
				cout<<" *";
			}
		}
		cout<<endl;
	}
	
	return 0;
} */


//Half Pyramid using numberes

// 1
// 2 2
// 3 3 3
// 4 4 4 4

/* #include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0; j<=i; j++){
			cout<<i+1<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
} */



//Floyd's Triangle 

// 1
// 2 3
// 4 5 6
// 7 8 9 10

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int counter=1;   
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){ 
			cout<<(counter++)<<" ";
		}
		cout<<endl;
	}
	
	return 0;
} */



// Butterfly Pattern
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *


/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1;j<=i; j++){
			cout<<"* ";
		}
		int space = 2*n - 2*i;
		for(int j=1; j<=space; j++){
			cout<<"  ";
		}
		for(int j=1;j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}	
	
	for(int i=n; i>=1; i--){
		for(int j=1;j<=i; j++){
			cout<<"* ";
		}
		int space = 2*n - 2*i;
		for(int j=1; j<=space; j++){
			cout<<"  ";
		}
		for(int j=1;j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}	
	
	return 0;
} */ 



//Inverted Pattern
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2
// 1

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n+1-i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
} */ 

//0-1 Pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			if((i+j)%2==0){
				cout<<" 1";
			}
			else{
				cout<<" 0";
			}
		}
		cout<<endl;
	}
	
	return 0;
} */


//Rhombus Pattern

//	   * * * * *
//	  * * * * *
//   * * * * *
//  * * * * *
// * * * * *

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";	
		}
		for(int j=1; j<=n; j++){
			cout<<" *";
		}
		cout<<endl;
	}
	
	return 0;
} */

// Number Pattern
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
} */


//Palindrome Pattern
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

/* #include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		int j;
		for(j=1; j<=n-i; j++){
			cout<<"  ";
		}
		int k=i;
		for(;j<=n;j++){
			cout<<k--<<" ";
		}
		k=2;
		for(;j<=n+i-1;j++){
			cout<<k++<<" ";
		}
		cout<<endl;
	}
	
	return 0;
} */


//Zig-Zaw Patern


#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<=3; i++){
		for(int j=1; j<=n; j++){
			if(((i+j)%4==0) || (i==2 && j%4==0)){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}

