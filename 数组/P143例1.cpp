#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,i,x;
	scanf("%d",&n);
	int a[n+3];
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	scanf("%d",&x);
	for(i=n;i>=x;i--) a[i+1]=a[i];
	a[x]=a[n+1];
	for(i=1;i<=n;i++) printf("%d ",a[i]);
	return 0;
}
