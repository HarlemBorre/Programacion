#include<iostream>
#include<stdlib.h>

using namespace std;
void Primos(int vecPri[], int n);
void CancMult(int vecPri[], int n);
void Mostrar(int vecPri[],int n);
main(){
	int vecPri[1000];
	Primos(vecPri, 1000);
	CancMult(vecPri, 1000);
	Mostrar(vecPri, 1000);
}

void Primos(int vecPri[], int n){
	for(int i=0;i<n;i++){
		primo[i]=true;
	}
}

void CancMult(int vecPri[], int n){
	for(int i=2;i<n;i++){
		if(vecPri[i])
			for(int j=2;i*j<n;j++){
				primo[i*j]=false;
			}
	}
}

void Mostrar(int vecPri[], int n){
	for(int i=2;i<n;i++){
		if(primo[i])
		cout<<i<<" ";
	}
}
