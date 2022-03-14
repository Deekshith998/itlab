#include <stdio.h>
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
	float sum=x;
	for(i=1;i<n;i++){
		float nume=x*((2*i)+1);
		
		if(i%2==1){
			sum=sum-nume/fact((2*i)+1);
		}
		else{
			sum=sum+nume/fact((2*i)+1);
		}
	}
	printf("%f",sum);

}
