#include <stdio.h>
#include <math.h>
int fact(int);
int fact(int k){
	int i,sum=1;
	for(i=k;i>0;i--){
		sum=sum*i;
	}
	return (sum);
}
int main(){
	int i;
	float n,x;
	printf("enter n: ");
	scanf("%f",&n);
	printf("enter x: ");
	scanf("%f", &x);
	float sum=1;
	for(i=1;i<n;i++){
		float nume=pow(x,i);
		sum=sum+(nume/fact(i));
	}
	printf("%f",sum);

}
