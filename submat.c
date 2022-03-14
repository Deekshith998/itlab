#include <stdio.h>
int main(){
	int i,j,r1,r2,c1,c2;
	printf("enter 1st matrix rows & col: ");
	scanf("%d %d",&r1,&c1);
	int a[r1][c1];
	printf("enter 2nd matrix rows & col: ");
	scanf("%d %d",&r2,&c2);
	int b[r2][c2];
	
	if(r1==r2 && c1==c2){
		printf("enter 1st matxix elements\n");
		for(i=0;i<r1;i++){
			printf("enter %d row elemts\n",i+1);
			for(j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter 2nd matrix elements\n"); 
		for(i=0;i<r2;i++){
			printf("enter %d row elemts\n",i+1);
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
			}
		}
		printf("\n answer \n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%d\t",a[i][j]-b[i][j]);
			}
			printf("\n");
		}
	
	}
	else{
		printf("matrix addition not possible");
	}
}
