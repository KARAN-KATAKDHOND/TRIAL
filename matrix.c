#include<stdio.h>
#include<conio.h>

void main(){
	int mat1[3][3],mat2[3][3];
	printf("Enter Elemnts of Matrix 1: ");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		printf("\ta%d%d = ",i,j);scanf("%d",&mat1[i][j]);
		}
		printf("\n");
	}
		printf("\nEnter Elements of Matrix 2: \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("\tb%d%d = ",i,j);scanf("%d",&mat2[i][j]);
		}
		printf("\n");
	}
  
  int result[3][3];
  for(int i=0;i<3;i++){
  
  	for(int j=0;j<3;j++){
  		
		  result[i][j]=0;
		  for(int k = 0;k<3;k++){
		  	result[i][j] += mat1[i][k]*mat2[k][j];
		  } 
	  }
  }
  	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("\t R %d%d = %d",i+1,j+1,result[i][j]);
		}
			printf("\n");
	}
  getch();
}