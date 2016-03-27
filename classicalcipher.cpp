#include <iostream>
#include <cstdio>
#include <algorithm>
#define for(i,a,b) for(i=a;i<b;i++)

using namespace std;

int main(){
	int i,C[5000],j;
	int A[26] = {11,6,1,22,17,12,7,2,23,18,13,8,3,24,19,14,9,4,25,20,15,10,5,0,21,16};
	char temp;
	while(scanf("%c", &C[i])==1){
		temp = 'A';
	for(j,0,26){
	if(C[i]-'A' == A[j]){
		temp += j; 
		cout<< temp;
		goto L1;
	}
	}
	L1:;
	i++;
	}
}