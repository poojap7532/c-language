#include<stdio.h>


int main(){
	
	int a,b,c;
	printf("Enter A: ");
	scanf("%d",&a);

	printf("Enter B: ");
	scanf("%d",&b);
	
	printf("Enter C: ");
	scanf("%d",&c);
	
	
	if(a<b){
		
		if(a<c){
			printf("A is Min");
		}
		else{
			printf("C is Min");
		}
	}
	else{
		if(b<c){
			printf("B is Min");
		}
		else{
			printf("C is Min");
		}
	}
	return 0;
	
}
