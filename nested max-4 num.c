#include<stdio.h>

int main(){
	
	int p,q,r,s;
	
	printf("Enter P: ");
	scanf("%d",&p);
	
	printf("Enter Q: ");
	scanf("%d",&q);

	printf("Enter R: ");
	scanf("%d",&r);
	
	printf("Enter S: ");
	scanf("%d",&s);
	
	if(p>q){
		if(p>r){
			if(p>s){
				printf("P is Max");
			}
			else{
				printf("S is max");
			}
		}
		else{
			if(r>s){
				printf("R is Max");
			}
			else{
				printf("S is Max");
			}
				}
	}
	else{
		if(q>r){
			if(q>s){
				printf("Q is Max");
			}
			else{
				printf("S is Max");
			}
		}
		else{
			if(r>s){
				printf("R is Max");
			}
			else{
				printf("S is Max");
			}
		}
	}
	return 0;
}
