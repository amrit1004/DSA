#include<iostream>
using namespace std;
void display(int ar[]){
    for(int i = 0;i<=4;i++){
        cout<<ar[i];
    }
}
void change(int b[]){ // always array pass as reference to functions
    b[0] = 40;
}
int main(){
    int arr[5] = {1,4,2,7,46};
    display(arr);
    change(arr);
    display(arr);

}