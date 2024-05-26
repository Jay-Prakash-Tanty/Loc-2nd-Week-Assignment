#include<iostream>
using namespace std;
int main (){
    int a;
    cout << "Enter the number till which the number of lines of the pattern will be printed";
    cin >> a;
    for(int i=1; i<=a; i++){
        for(int j=a;j>=i ;j--){
            cout<<"*";
            
        }
        cout <<"\n";
        
    }
}