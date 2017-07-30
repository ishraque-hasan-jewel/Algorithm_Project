#include<bits/stdc++.h>
using namespace std;
int mid,value;


int binarysearch(int A[],int low,int high)
{

        mid=(low+high)/2;

        if(A[mid]<value)
        {
            binarysearch(A,mid+1,high);
        }
        else if(A[mid]>value)
        {
            binarysearch(A,low,mid);
        }
        else if(A[mid]==value)
        {
            return mid;
        }

}


int main()
{
    int n;
    cout<<"Enter the Array Size :";
    cin>>n;
    int A[n];
    cout<<"Please give the array values :";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the search value :";
    cin>>value;

    binarysearch(A,0,n-1);

    cout<<mid<<endl;
}
