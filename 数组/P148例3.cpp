#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int h[1001],n,i,j,ans,t1,t2;
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&h[i]);
	for(int i=1;i<=n;i++){
		t1=t2=0;
		for(j=1;j<i;j++) if(h[j]>h[i]) t1++;
		for(j=i+1;j<=n;j++) if(h[j]>h[i]) t2++;
		if(t1==t2) ans++;
	}
	printf("%d\n",ans);
	return 0;
}

