#include<iostream>
using namespace std;
int main(){
    int arr[5]= {2 , 4, 7 , 8, 6};
    int *ptr = arr;//gives the address
    cout<<ptr<<endl;
    cout<<ptr[3];//gives value of the array;
    cout<<*ptr<<endl;
    cout<<ptr[0]; 
    for(int i = 0; i<=4;i++){  //way of printting array
        cout<<*ptr<<endl;
        ptr++;
    }
    ptr = arr;// as to get again the value of array
}