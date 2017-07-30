#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int totalindasing)

{
    int i,j,key,smallindex,small;
    for(i=0;i<totalindasing;i++)
    {
        key=i;
        smallindex=i;
        small=arr[i];
        for(j=i+1;j<totalindasing;j++)
        {
           if( small>arr[j])
           {
               small=arr[j];
               smallindex=j;
           }
        }
        swap(arr[key],arr[smallindex]);
    }

    for(int i=0;i<totalindasing;i++)

    {
        cout<<arr[i]<<" ";
    }

    }
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    selectionsort(A,n);
    return 0;
}
