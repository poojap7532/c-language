#include<stdio.h>

int main(){
	int a,b,c,d,e;
	
	printf("Enter A: ");
	scanf("%d",&a);
		
	printf("Enter B: ");
	scanf("%d",&b);

	printf("Enter C: ");
	scanf("%d",&c);	
	
	printf("Enter D: ");
	scanf("%d",&d);
	
	printf("Enter E: ");
	scanf("%d",&e);
	
	a>b ?
	 a>c ?
	  a>d ?
	   a>e ?
	   printf("A is Max")
	   :
	   printf("E is Max")
	  :
	   printf("D is Max")
	 :
	   printf("C is Max")
	   
	   
	:
	b>c ?
	 b>d ?
	  b>e ?
	   printf("B is Max")
	  :
	   printf("C is Max")
	 :
	   printf("D is Max")
	:
	   printf("E is Max");
	
return 0;	
	
}
