#include <stdio.h>
int main(){
	int a=0,k=0,b=1,n;
	printf("enter the number ");
	scanf("%d ",&n);
	printf(" [ 0");
	for (int i=0;i<n;i++){
		k=b+a;
		
		a=b;
		b=k;
		printf(",%d",b);
	}
	printf("]");
}
