#include<stdio.h>

int main(){
 
 char ch;
 		
printf("Enter character: ");
scanf("%c",&ch);

//alphabet check	
if((ch >='a' && ch <= 'z') || (ch >= 'A' && ch <= 'z')){
	printf("%c is alphabet", ch);
}
else if(ch >='0' && ch <= '9'){
	printf("%c is digit", ch);	
}
else{
	printf("%c is special character", ch);	
	
}

	return 0;
	
}
