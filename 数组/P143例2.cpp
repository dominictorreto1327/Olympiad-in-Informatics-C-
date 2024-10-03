#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,x;
	scanf("%d",&n);
	int a[n+3];
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	scanf("%d",&x);
	for(int i=x;i<=n;i++) a[i]=a[i+1];
	for(int i=1;i<n;i++) printf("%d ",a[i]); 
	return 0;
}
