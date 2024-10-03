#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,i,j,temp,h[101];
	cin>>n;
	for(i=1;i<=n;i++) cin>>h[i];
	for(i=1;i<n;i++)
		for(j=1;j<=n-1;j++)
			if(h[j]>h[j+1]){
				temp=h[j];
				h[j]=h[j+1];
				h[j+1]=temp;
			}
	for(i=1;i<n;i++) cout<<h[i]<<" ";
	cout<<h[n]<<endl;
	return 0;
}

