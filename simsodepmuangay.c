#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>

#define ll long long
#define ar array

//Sim so dep khuyen mai 0% lai suat

bool mistoquangteo9(int quangteo) {
	while(quangteo>0)
	{
		int t = quangteo % 10;
		quangteo/=10;
		if(t == 9) return true;
	}
	return false;
}

bool mistoquangteo6(int quangteo) {
	while(quangteo>0)
	{
		int t = quangteo % 10;
		quangteo/=10;
		if(t == 6) return true;
	}
	return false;
}

int _Finding(int a[], int n) {
	int quangteo;
	int i;
	for(i=0; i < n; ++i) {
		if((mistoquangteo9(a[i]) == true) && (mistoquangteo6(a[i]) == true)) {
			printf("0%d\n", a[i]);
		}
	}
}

int _ImportArray(int a[], int n)
{
	int i;
	for(i=0; i<n; ++i) {
		scanf("%d", &a[i]);
	}
	return a[i];
}

int main() 
{
	int quangteo;
	int a[1000];
	scanf("%d", &quangteo);
	_ImportArray(a, quangteo);
	printf("-----\n");
	_Finding(a, quangteo);
}
