#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,m,j;
	scanf("%d %d",&n,&m);
	int t[n+m+3],d;
	for(int i=1;i<=n;i++) cin>>t[i];
	for(int i=1;i<=m;i++){
		cin>>d;
		if(d>=t[n]) t[n++]=d;
		else{
			for(j=1;j<=n;j++) if(t[j]>=d) break;
			for(int k=n;k>=j;k--) t[k+1]=t[k];
			t[j]=d;
			n++;
		}
	}
	for(int i=1;i<=n;i++) printf("%d ",t[i]);
	return 0;
}

