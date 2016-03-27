#include <iostream>
#define for(i,a,b) for(i=a;i<b;i++)
using namespace std;

int main(){
	int A[26],B[26],i;
	for(i,0,26){
	A[i] =i;
	}
	for(i,0,26){
	B[i] = (21*A[i] + 11)%26;
	cout<<B[i]<<endl;
	}


}