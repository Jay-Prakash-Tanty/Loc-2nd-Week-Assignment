#include<iostream>
using namespace std;
int main()
{
    int sz1,sz2;
    cout <<"Enter the size of the first array:";
    cin >> sz1;
    int arr1[sz1];
    cout <<"Enter the first array elements";
    for(int i=0;i<sz1;i++){
        cin >> arr1[i];
    }
    cout <<"Enter the size of the second array:";
    cin >> sz2;
    int arr2[sz2];
    cout <<"Enter the second array elements";
    for(int i=0;i<sz2;i++){
        cin >> arr2[i];
    }
    int sz3 =sz2+sz1;

    int arr3[sz3];
    for(int i=0;i<sz1;i++ ){
        
        arr3[i]=arr1[i];
    }
    for(int i=0;i<sz2;i++ ){
        
        arr3[i+sz1]=arr2[i];
    }
    cout <<"the mergerd array in reverse order:\n";
    for(int i=sz3-1; i>=0; i--){
        
        cout<<arr3[i]<<"\n";
        
    }


}