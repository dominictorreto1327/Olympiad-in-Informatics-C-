#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,m,k;
	scanf("%d %d",&n,&m);
	int a[n+3],b[m+3];
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=m;i++) scanf("%d",&b[i]);
	for(int i=1;i<=m-1;i++){
		int x=0;
		for(int j=1;j<=n;j++) if(a[j]==b[i]) x++;
		printf("%d ",x);
	}
	int y=0;
	for(int i=1;i<=n;i++) if(a[i]==b[m]) y++;
	printf("%d\n",y);
	return 0;
}

