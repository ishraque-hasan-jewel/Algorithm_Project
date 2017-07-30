#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[], int Totalindexing)
{
   int i,j,temp;
   for(i=0;i<Totalindexing;i++)
   {
      for(j=i+1;j<Totalindexing;j++)
      {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
   }

   for(int i=0;i<Totalindexing;i++)
   {
     cout<<arr[i]<<" ";
   }
}


int main()
{
int n;
cout<<"Enter a Number: ";
cin>>n;
int A[n];
for(int i=0;i<n;i++)
{
   cin>>A[i];
}
BubbleSort(A,n);
return 0;
}
