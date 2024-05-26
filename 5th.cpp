#include<iostream>
using namespace std;
int main(){
    int sz;
    cout<<"Enter the size of the array:";
    cin >> sz;
    int array1[sz];
    for (int i=0; i<sz; i++)
    {
        
        cout <<"array1[" << i<<"]=" ;
        cin >> array1[i];
    }
    int array2[sz];
    cout <<"\n"; 
    for (int i=0; i<sz; i++)
    {
        
        array2[i]=array1[i];
        cout <<"array2[" << i << "]:" << array2[i] <<"\n";
    }
}