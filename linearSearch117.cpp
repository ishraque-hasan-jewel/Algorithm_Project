#include<bits/stdc++.h>
using namespace std;

int linearSearch(int data[], int length, int val) {
       int k=0;
       while(k<length){
       if (val == data[k]) {

          return k;

       }
       k++;

   }

   return -1;
}

int main()
{
    int data[]={7,2,18,98,11,3,34,21};
    int val;
    cin>>val;
    int result = linearSearch(data,8,val);
    if(result>=0)
    {
        cout<<result<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}
