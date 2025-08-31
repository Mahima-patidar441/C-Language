#include<stdio.h>

int a,b,c;

int main(){
	printf("Enter first digit: ");
	scanf("%d",&a);
	printf("Enter Second digit: ");
	scanf("%d",&b);
	printf("Enter Third digit: ");
	scanf("%d",&c);
	
	if(a>b){
	if(a>c){
		printf("First digit is larger");
		
	}
	else{
		printf("Third digit is larger");
	}
	}
	else if(b>c){
		printf("Second digit is larger");
	}
	else{
		printf("Third digit is larger");
	}
}
