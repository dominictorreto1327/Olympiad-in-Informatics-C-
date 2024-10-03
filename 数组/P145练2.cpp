#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,x;
	scanf("%d %d",&n,&x);
	int a[n+3],nn=n;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		if(a[i]==x){
			for(int j=i;j<=nn-1;j++){
				a[j]=a[j+1];
			}
			nn--;
		}
	}
	for(int i=1;i<=nn;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

