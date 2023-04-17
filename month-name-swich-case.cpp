#include<stdio.h>

int main(){
	
   char J,F,M,A,m,j,u,a,S,O,N,D;
   printf("Input Month No : ");
   scanf("%c",&J,&F,&M,&A,&m,&j,&u,&a,&S,&O,&N,D);
   switch(J,F,M,A,m,j,u,A,S,O,N,D) {
  
    char 'J':
	       printf("January\n");
	       break;
	char 'F':
	       printf("February\n");
	       break;
	char 'M':
	       printf("March\n");
	       break;
    char 'A': 
	       printf("April\n");
	       break;
	char 'm':
	       printf("May\n");
	       break;
    char 'j' :
	       printf("June\n");
	       break;
    char 'u':
	       printf("July\n");
	       break;
	char 'a':
	       printf("August\n");
	       break;
	char 'S':
	       printf("September\n");
	       break;
	char 'O':
	       printf("October\n");
	       break;
	char 'N':
	       printf("November\n");
	       break;
	char 'D':
	       printf("December\n");
	       break;
	default:
	       printf("invalid Month number. \nPlease try again ....\n");
	       break;
      }


	return 0;
}
