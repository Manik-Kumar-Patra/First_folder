#include<stdio.h>
int mul(int a,int b){
	printf("---------Multiplication----------\n");
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	int c;
	c=a*b;
	printf("Multiplication of %d and %d is =%d\n",a,b,c);
//	return(c);
}

int div(int a,int b){
	printf("---------Division----------\n");
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	int c;
	c=a/b;
	printf("Division of %d and %d is =%d\n\n",a,b,c);
	return(c);
}
int main(){
	int x,y,z;
	z=mul(x,y);
	printf("\n");
	z=div(x,y);
	
	
	z=mul(x,y);
	printf("\n");
	z=div(x,y);
	
	z=mul(x,y);
	printf("\n");
	z=div(x,y);
	
	
}

void sum



//#include<stdio.h>
//int main(){
//	int row,col,i,j;
//	
//	printf("Enter the number of Rows :");
//	scanf("%d",&row);
//	printf("Enter the number of Colums :");
//	scanf("%d",&col);
//	
//	int matrix1[row][col],matrix2[row][col],result[row][col];
//	
//	printf("Enter first matrix elements :\n");
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			printf("Elements at[%d][%d] :",i,j);
//			scanf("%d",&matrix1[i][j]);
//		}
//		printf("\n");
//		
//	}
//	
//	printf("Enter second matrix elements :\n");
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			printf("Elements at[%d][%d] :",i,j);
//			scanf("%d",&matrix2[i][j]);
//		}
//		printf("\n");	
//	}
//	
//	
//	//perform matrix Addition 
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			result[i][j]=matrix1[i][j]/matrix2[i][j];	
//		}	
//	}
//	
//	
//	printf("Addition Matrix is :\n");
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			printf("%d\t",result[i][j]);	
//		}
//		printf("\n");	
//	}
//	
//	
//	
//}
//
//



//Addition of 2d Matrix
//#include<stdio.h>
//int main(){
//	int row,col,i,j;
//	
//	printf("Enter the number of Rows :");
//	scanf("%d",&row);
//	printf("Enter the number of Colums :");
//	scanf("%d",&col);
//	
//	int matrix1[row][col],matrix2[row][col],result[row][col];
//	
//	printf("Enter first matrix elements :\n");
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			printf("Elements at[%d][%d] :",i,j);
//			scanf("%d",&matrix1[i][j]);
//		}
//		printf("\n");
//		
//	}
//	
//	printf("Enter second matrix elements :\n");
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			printf("Elements at[%d][%d] :",i,j);
//			scanf("%d",&matrix2[i][j]);
//		}
//		printf("\n");	
//	}
//	
//	
//	//perform matrix Addition 
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			result[i][j]=matrix1[i][j]+matrix2[i][j];	
//		}	
//	}
//	
//	
//	printf("Addition Matrix is :\n");
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			printf("%d\t",result[i][j]);	
//		}
//		printf("\n");	
//	}
//	
//	
//	
//}




/*First Array Program */
//#include<stdio.h>
//int main() {
//    int rows, cols;
//    
//    // Define the dimensions of the array
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    
//    printf("Enter the number of columns: ");
//    scanf("%d", &cols);
//    
//    // Declare a 2D array
//    int array[rows][cols];
//    
//    // Input elements into the array
//    printf("Enter elements for the array:\n");
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            printf("Element at [%d][%d]: ", i, j);
//            scanf("%d", &array[i][j]);
//        }
//    }
//
//    // Print the 2D array
//    printf("\nThe 2D array is:\n");
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            printf("%d\t", array[i][j]);
//        }
//        printf("\n");
//    }
//
//   
//}
