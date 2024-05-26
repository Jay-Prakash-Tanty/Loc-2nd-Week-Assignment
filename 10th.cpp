#include<iostream>
using namespace std;
int main(){
    int sz,counta,countd,counts;
    counta=0;
    countd=0;
    counts=0;
    cout <<"Enter the size of the string:";
    cin >> sz;
    char string[sz];
    for(int i=0; i<sz; i++){
        cout<<"string["<<i<<"]:";
        cin>>string[i];
        cout<<"\n";
    }
    for(int i=0; i<sz; i++){
        if(((int)string[i]>=65 && (int)string[i]<=90)|| ((int)string[i]>=97 && (int)string[i]<=122) )
        counta++;
        else if(((int)string[i]>=48 && (int)string[i]<=57))
        countd++;
        else if(
            ((int)string[i]>=32 && (int)string[i]<=47)||
            ((int)string[i]>=58 && (int)string[i]<=64)||
            ((int)string[i]>=91 && (int)string[i]<=96)||
            ((int)string[i]>=123 && (int)string[i]<=126))
        counts++;
    }
    cout << "The total number of alphabets are:" << counta << endl;
    cout << "The total number of digtis are:" << countd << endl;
    cout << "The total number of special symbols are:" << counts << endl;


}