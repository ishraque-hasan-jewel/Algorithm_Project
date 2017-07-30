#include<bits/stdc++.h>
using namespace std;

int quic_ksort(int A[],int start , int End)
{
    int pivot=A[start];
    int i=start,j=End,help_valu=1;

    while(i<j)
    {
      if(help_valu)
      {
        if(A[j]<pivot)
        {
            A[i]=A[j];
            i++;
            help_valu=0;
        }
        else
        {
            j--;
        }
      }
      else
      {

        if(A[i]>pivot)
        {
            A[j]=A[i];
            j--;
            help_valu=1;
        }
        else
        {
            i++;
        }
      }
    }
    A[j]=pivot;
    return j;
}

void devide(int A[],int start,int End)
{
    int pivot;
    if(start>=End)
    {
        return;
    }
    else
    {
        pivot=quic_ksort(A,start,End);
        devide(A,0,pivot-1);
        devide(A,pivot+1,End);
    }
}

int main()
{
    int n;
    cout<<"Enter A number for array size : ";
    cin>>n;
    int A[n];
    cout<<"Please give the array values :";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    devide(A,0,n-1);
    cout<<"Sorted Array is :";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
