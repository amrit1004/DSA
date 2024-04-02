#include <iostream>
#include <vector>
using namespace std;
void change(vector <int>& a){   // vectors are passed according to pass by value  new vector is created everysingletime
    a[0] = 100;   // to pass by reference use & sign
      for(int i = 0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(1);
    v.push_back(5);
    v.push_back(10);
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    change(v);
      for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
