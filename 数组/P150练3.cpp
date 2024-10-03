#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,k;
	scanf("%d",&n);
	int a[n+3],m=n;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	scanf("%d",&k);
	for(int i=1;i<=m;i++){
		if(a[i]==k){
			for(int j=i;j<=m;j++){
				a[j]=a[j+1];
			}
			m--;
		}
	}
	for(int i=1;i<=m;i++) printf("%d ",a[i]);
	return 0;
}

