#include <stdio.h>
int fact(int);
int fact(int v){
	int i,sum=1;
	for(i=v;i>0;i--){
		sum=sum*i;
	}
	//printf("fact :%d \n",sum);
	return (sum);
}
int main(){
	float n,x,sum=1;
	int i;
	printf("enter num :");
	scanf("%f",&n);
	printf("enter x:");
	scanf("%f",&x);
	for(i=1;i<n;i++){
		if(i%2==1){
			sum=sum-((x*(i*2))/fact(i*2));
		}
		else{
			sum=sum+((x*(i*2))/fact(i*2));
		}
		
	}
	printf("%f",sum);
}
