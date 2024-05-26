#include<iostream>
using namespace std;
int main()
{
    int a,k;
    cout << "Enter the number till which line you want to print the pattern:";
    cin >>a;
    k=1;
    for(int i=1; i<=a; i++){
        // cout<<"i="<<i<<"\n";
        for(int j=1;j<=i ;j++){
            // cout<<"i="<<i;
            // cout<<"j="<<j;
            cout<<k++<<" ";
            
        }
        cout <<"\n";
        // k++;
        
    }
}