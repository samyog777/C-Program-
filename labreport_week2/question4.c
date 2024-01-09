#include <stdio.h>
void armstrong(int a){
	int remainder,originalNum,result = 0;
	originalNum = a;
	while(a>0){
		remainder = a%10;
		result += remainder*remainder*remainder;
		a = a/10;
	}
	if (originalNum == result){
		printf("The given number is Armstrong number.");
	}else{
		printf("The given number is not a Armstrong number.");
	}
}
void perfect(int b){
	int remainder,originalNum,result = 0;
	originalNum = b;
	while(b>0){
		remainder = b%10;
		result += remainder;
		b = b/10;
	}
	if(originalNum == result){
		printf("The given number is a perfect number.");
	}else{
		printf("and not a perfect number");
	}
}
int main(){
	int num;
	printf("Enter a number to check: ");
	scanf("%d",&num);
	armstrong(num);
	perfect(num);
    return 0;
}