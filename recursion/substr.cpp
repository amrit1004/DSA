#include<iostream>
using namespace std;
// void printSubset(string ans , string original){
//     if(original == ""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printSubset(ans + ch , original.substr(1));
//     printSubset(ans ,original.substr(1));
// }
void printSubset(string ans , string original, int idx =0){
    if(idx == original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    printSubset(ans + ch , original, idx+1);
    printSubset(ans ,original , idx+1);
}
int main(){
    string original = "abc";
    string ans;
    int idx = 0;
    printSubset(ans , original , idx);
}