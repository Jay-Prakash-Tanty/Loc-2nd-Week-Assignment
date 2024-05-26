#include <iostream>
using namespace std;

int sorter(int array[],int s){
    int temp;

    for (int i = 0; i < s; i++){
        for (int j = i; j < s; j++){
            if (array[i] > array[j+1]){
                temp = array[i];
                array[i] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    cout << "Elements sorted in the ascending order are:\n";
    for (int i = 1; i <= s; i++){
     cout << "array["<<i-1<<"]:"<<array[i-1]<<"\n";   
    }
}

int main(){
    int i, j, sz, temp;
    
    cout << "Enter the size of elements: ";
    cin >> sz;
    int arr[sz];
    for (i = 0; i < sz; i++){
        cout <<"array[" << i<<"]:" ;
        cin >> arr[i];
    }

    sorter(arr,sz);
    
    return 0;
}