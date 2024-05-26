#include <iostream>
using namespace std;
int main()
{
    int sz;
    cout<<"Enter the size of the array:";
    cin >> sz;
    int array[sz];
    for (int i=0; i<sz; i++)
    {
        
        cout <<"array[" << i<<"]" ;
        cin >> array[i];
    }
    int most = array[0];
    int temp=0, tempCount, count=1;
    
    for (int i=0;i<5;i++)
    {
        tempCount = 0;
        temp=array[i];
        tempCount++;
        for(int j=i+1;j<5;j++)
        {
            if(array[j] == temp)
            {
                tempCount++;
                if(tempCount > count)
                {
                    most = temp;
                    count = tempCount;
                }
            }
        }
    }
    cout << "Most occured element is: " <<  most;
}