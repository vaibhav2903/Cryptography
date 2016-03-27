/*VAIBHAV SAVALA
12MA20047*/
#include <stdio.h>
#include <stdlib.h>
#define for(i,a,b) for(i=a;i<b;i++)

int* ext_euclid_algo(int m,int b)
{
	int q,T[3],i;
	int* A = (int*)malloc(3*sizeof(int));
	int* B = (int*)malloc(3*sizeof(int));
	A[0] = 1;
	A[1] = 0;
	A[2] = m;
	B[0] = 0;
	B[1] = 1;
	B[2] = b;
	while(B[2]!=0 && B[2]!=1){
	q = A[2]/B[2];
	for(i,0,3){
	T[i] = A[i] - (q*B[i]);
	}
	for(i,0,3){
	A[i] = B[i];
	}
	for(i,0,3){
	B[i] = T[i];
	}
	}
	if(B[2]==0)
	return A;
 	if(B[2]==1)
 		return B;
	}

int main(){
int m,b;

printf("Enter the values of m and b\n");
printf("the value of m:\n");
scanf("%d",&m);
printf("the value of b:\n");
scanf("%d",&b);
int* S;
	S = (int*)malloc(3*sizeof(int));
 	S = ext_euclid_algo(m,b);
if(S[2]==1){
	printf("the inverse exists and the inverse is %d\n",S[1]);

}
else{
	printf("Inverse doesn't exist\n");
	printf("the gcd is %d\n",S[2]);
}
return 0;
}