#include<iostream>
#include<cstring>
#include<iomanip>
#include<sstream>
#include<map>
#include<stack>
#include<queue>
using namespace std;
#define hash(a,b,c) (a)+(b)*3+(c)*9
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
#define X first
#define Y second



int main() {
	int d[16][16];
	memset(d,0,sizeof(d));
	int po[4]={-1,1,4,-4};
	for(int i=0;i<16;i++) {
		if(i%4!=0) d[i][i-1]=1;
		if(i%4!=3) d[i][i+1]=1;
		if(i>=4) d[i][i-4]=1;
		if(i<=12)d[i][i+4]=1;
	}
	d[5][6]=0; d[6][5]=0; d[10][14]=0; d[14][10]=0;
	for(int k=0;k<16;k++)
		for(int i=0;i<16;i++)
			for(int j=0;j<16;j++)
				if(d[i][k]*d[k][j]!=0) {
					if(d[i][j]==0) d[i][j]=d[i][k]+d[k][j];
					else d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
				}
	char st,ed;
	int T;
	cin>>T;
	cin.get();
	while(T--) {

	}
}
