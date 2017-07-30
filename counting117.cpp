#include<bits/stdc++.h>
 using namespace std;
 int array[11]={5,1,4,8,3,2,4,5,0,7,9};
 int countingArray[12];
 int sortedArray[12];
 void countingsort()
 {
     int index,firstindex,secondindex;
     for(index=0;index<11;index++)
     {
         ++countingArray[array[index]];
     }
     for(firstindex=0,secondindex=firstindex+1;secondindex<12;firstindex++,secondindex++)
     {
         countingArray[secondindex]=countingArray[firstindex]+countingArray[secondindex];
     }
     for(index=0;index<11;index++)
     {
         sortedArray[countingArray[array[index]]-1]=array[index];
         --countingArray[array[index]];
     }
     for(index=0;index<12;index++)
     {
       array[index] =sortedArray[index];
     }
 }
 int main()
 {
    int i;
    countingsort();
    cout<<"Enter the number:"<<endl;
    for(i=0;i<11;i++)
    {
        cout<<array[i]<<" "<<endl;
    }
    return 0;
 }
