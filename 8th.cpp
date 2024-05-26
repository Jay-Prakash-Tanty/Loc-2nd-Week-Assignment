#include<iostream>
using namespace std;
int main(){
    int sz,countv,countc;
    countv=0;
    countc=0;
    cout <<"Enter the size of the string:";
    cin >> sz;
    char string[sz];
    for(int i=0; i<sz; i++){
        cout<<"string["<<i<<"]:";
        cin>>string[i];
        cout <<"\n";
    }
    for(int i=0; i<sz; i++){
        if('a'==string[i])
        countv++;
        else if('e'==string[i])
        countv++;
        else if('i'==string[i])
        countv++;
        else if('o'==string[i])
        countv++;
        else if('u'==string[i])
        countv++;
        else 
        countc++;
    }
    cout<<"The number of vowels are:"<<countv<<endl;
    cout <<"The number of consonants are:"<<countc<<endl;
    return 0;
       
}