#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,k,x=0;
	scanf("%d",&n);
	int a[n+3];
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	scanf("%d",&k);
	for(int i=1;i<=n;i++){
		if(a[i]==k) x++;
	}
	printf("%d\n",x);
	return 0;
}

