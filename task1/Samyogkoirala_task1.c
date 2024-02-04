// Name: Samyog Koirala
// UID: 2358296

#include <stdio.h> //this library is used for the input & output operations 
#include <stdlib.h> // this library is used for the  dynamic memory allocation

//creating a function for the Linear Regression
void linear_regression(char *filename,int *count, double *sum_of_X, double *sum_of_Y, double *sum_of_X_square, double *sum_of_Y_square, double *sum_of_XY, double *A, double *B){
	
	//now opening the datasets files in the readable form.
	// FILE datatype is used to create a pointer of the file
	// using the fopen function to open the file 
	//filename[i] = name of the file of 1st index.
	// "r" means read form 
	FILE *fptr = fopen(filename, "r");	
	
	//Handling the error occurs in opening the file
	if (fptr == NULL){
		printf("Error on Opening the file: %s.\n",filename);
		exit(1);		
	}else{
		printf("File opened Successfully.\n");
	}
		
		
	//reading the data from the file and finding the sums that are used in calculating linear regression
	double x,y;
		
	while(fscanf(fptr,"%lf,%lf",&x,&y) != EOF){
		*sum_of_X +=x;
		*sum_of_Y +=y;
		*sum_of_X_square +=x*x;
		*sum_of_Y_square += y*y;
		*sum_of_XY +=x*y;
		(*count)++;
	}
	
	//closing the file pointer 	
	fclose(fptr);
}

//creating the main function
int main(){
	//creating the array of the files
	char *filename[] = {"datasetLR1.txt","datasetLR2.txt","datasetLR3.txt","datasetLR4.txt"}; 
	int number_of_datasets = 4;  //initializing number with 4 because we have 4 datasets
	double sum_of_X = 0.0;
	double sum_of_Y = 0.0;
	double sum_of_X_square = 0.0;
	double sum_of_Y_square = 0.0;
	double sum_of_XY = 0.0; 
	int count = 0; //Intializing the count variable for updating the number of the dataset 
	double A, B;
	double x,y;
	int i = 0;
	//using for loop to literates all the datasets present in the array filename[]
	for (i=0;i<number_of_datasets;i++){
		//calculating the linear regression	
		linear_regression(filename[i],&count,&sum_of_X, &sum_of_Y,&sum_of_X_square,&sum_of_Y_square,&sum_of_XY,&A,&B);
		
	}
	
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	
	// Debugging print statements
    printf("sum_of_X: %.2lf\n", sum_of_X);
    printf("sum_of_Y: %.2lf\n", sum_of_Y);
    printf("sum_of_X_square: %.2lf\n", sum_of_X_square);
    printf("sum_of_Y_square: %.2lf\n", sum_of_Y_square);
    printf("sum_of_XY: %.2lf\n", sum_of_XY);
    
    printf("---------------------------------------------------------------------------------------------------------------------\n");
    //Now calculating the linear regression coefficents (A and B)
	B = ((count * sum_of_XY) - (sum_of_X * sum_of_Y)) / ((count * sum_of_X_square )- (sum_of_X * sum_of_X));
	A = ((sum_of_Y * sum_of_X_square) - (sum_of_X * sum_of_XY)) / ((count * sum_of_X_square )- (sum_of_X * sum_of_X));
	
	//displaying A & B
	printf("A: %.2lf\n", A);
    printf("B: %.2lf\n", B);
	
	printf("---------------------------------------------------------------------------------------------------------------------\n\n");
			
	printf("For the all Datasets , the Linear Regression Equation is:  y = (%.2lf)x + (%.2lf)\n",B,A);
			
	// Taking user input for calculating y
	double new_value_of_x;
	printf("Enter a value of x : ");
	scanf("%lf", &new_value_of_x);
	
	//displaying the equation of linear regression
	y = B*new_value_of_x + A;
	printf("The new value of y = %.2lf\n", y);
	
	return 0;
}
