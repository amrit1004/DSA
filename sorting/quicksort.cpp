#include<iostream>
using namespace std;
int partition(int arr[] ,int si , int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i = si+1 ; i<=ei; i++){
        int count = 0;
        if(arr[i]<=pivotElement) count ++;
        int pivotIdx = count + si;
        swap(arr[si] ,arr[pivotIdx]);}
        int i = si;
        int j = ei;
        while(i<pivotElement && j>pivotElement){
            
        }
    
}