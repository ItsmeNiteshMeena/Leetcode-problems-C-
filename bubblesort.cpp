
#include <iostream>
using namespace std;
void bubble (int arr[],int s)
{ bool c=false;
    int swap=0;
    for (int i=0;i<s;i++)
    {
        for (int j=0 ;j<s-i-1;j++)
        {
            if(arr[j]>arr[j+1])
           { swap++;
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            c=true;
           }
        }
        if (c==false)
        {
            break;
        }
    }
    cout<<"swap = "<<swap<<endl;
}

int main()
{
 int arr[]={1,4,2,6,8,3};            //        swapping in the total sorting =4
 int s=sizeof(arr)/sizeof(arr[0]);   //time complexity A O(n^2)  B(n)  W O(n^2)
 for (int i=0 ;i<s ;i++)             // space complexity is     O(1) is constant 
 {                                   // STABLE yes in arranged and duplicity only otherwise unstable
    cout<<arr[i]<<"\t";              // INPLACE if no extra array is taken then nootherwise yes
 }
 cout<<"after bubble sort "<<endl;   //approach ; subtract and conquer
 bubble(arr,s);
 for (int i=0 ;i<s ;i++)             // optimized yes 
 {
    cout<<arr[i]<<"\t";
 }
}