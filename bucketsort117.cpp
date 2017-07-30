#include<bits/stdc++.h>
using namespace std;
int Bucketsort(int ovi[], int n)
{
    int i,j,m=ovi[0];
    for(i=0;i<n;i++)
    {
       if(ovi[i]>m)
       {
          m=ovi[i];
       }
    }
    int y =ceil((m+1)/n);
    vector<int> B[10];
    for(int i = 0; i < n; i++)
    {
        int x = floor(ovi[i] / y);
        B[x].push_back(ovi[i]);
    }

    for(int i = 0; i < 10; i++) {
		sort(B[i].begin(), B[i].end());
	}
	int k = 0;
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < B[i].size(); j++) {
			ovi[k++] = B[i][j];
		}
	}

}
int main()
{
  int A[]= {6,17,2,12,42,19};
    Bucketsort(A,6);
    for(int i = 0; i < 6; i++) {
		cout<<A[i]<<" ";
	}
	cout<<endl;
    return 0;
}
