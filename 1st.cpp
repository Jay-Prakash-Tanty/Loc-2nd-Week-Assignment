#include<iostream>
using namespace std;
int array_occurence_counter(int array [],int k, int j){
    int sum;
    sum =0;
    for(int i=0; i<k;i++){
        if (j==array[i])

        {
            sum=sum+1;
        }
        else
        {
            sum = sum+0;
        }
    }
        return sum;

}

int main()
{
    int sz, a;
    cout<<"Enter the size of the array:";
    cin >> sz;
    int array[sz];
    for (int i=0; i<sz; i++)
    {
        
        cout <<"array[" << i<<"]" ;
        cin >> array[i];
    }
    cout << "Enter the number whose occurrence you want to find:";
    cin >> a;
    if(array_occurence_counter(array,sz,a)>0)
    cout << "the number of occurence of " << a << " is:" << array_occurence_counter(array, sz,a) ;
    else if(array_occurence_counter(array,sz,a)==0){
        cout<< "The number doesn't exist in the array";
    }
   
}

