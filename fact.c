#include <stdio.h>
int main(){
    unsigned long long int sum=1;
    int i,n;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=n;i>0;i--){
	sum=sum*i;
    }
    printf("the factorial of %d is %llu\n",n,sum);
}
