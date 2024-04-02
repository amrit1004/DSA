// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans = 0;
//     while(n!= 0){
//         int bit = n & 1 ;
//         ans = ans * 10 + bit;
//         n = n>>1;
//     }
//     cout<<ans<<endl;
//     return 0;
// }
// CPP program to Decimal to binary conversion
// using bitwise operator
// Size of an integer is assumed to be 32 bits
#include <iostream>
using namespace std;

// Function that convert Decimal to binary
int decToBinary(int n)
{
	// Size of an integer is assumed to be 32 bits
	for (int i = 8; i >= 0; i--) {
		int k = n >> i;
		if (k & 1)
			cout << "1";
		else
			cout << "0";
	}
}

// driver code
int main()
{
	int n = 14;
	decToBinary(n);
}
