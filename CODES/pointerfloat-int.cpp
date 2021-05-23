#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	float c;
	scanf("%f",&c);
	float *ptr;
	ptr=&c;
	printf("%d",(int)*(float*)ptr);
	return 0;
}

