#include <iostream>
using namespace std;

void selectionsort(int arr[], int n);  
void swap(int *, int *);  
int main()  
{  
    int n, i;  
    cout << ("Enter the size of the Array: ");  
    cin >> n;  
    int arr[n];  
    cout << ("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        cin >> arr[i];  
    }  
    selectionsort(arr, n);  
    cout << ("The final Array: \n");  
    for(i = 0; i < n; i++)  
    {  
        cout << arr[i] <<"\n";  
    }  
}  
void selectionsort(int arr[], int n)  
{  
    int i, j, min_in;  
    for(i = 0; i < n - 1; i++)  
    {  
        min_in = i;  
        for(j = i + 1; j < n; j++)  
        {  
            if(arr[j] < arr[min_in])  
            {  
                min_in = j;  
            }  
        }  
        swap(&arr[min_in], &arr[i]);  
    }  
}  
void swap(int *x, int *y)  
{  
    int temp;  
    temp = *x;  
    *x = *y;  
    *y = temp;  
}  