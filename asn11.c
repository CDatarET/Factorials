#include <stdio.h>

long factorial(int a){
	if(a >= 1){
		return(a*factorial(a-1));
	}
	else{
		return(1);
	}
}

int main(){
	printf("enter number of which you want factorial\n");
	int a;
	scanf("%d", &a);
	
	if(a < 0){
		printf("undefined factorial, restarting\n");
		
		main();
	}
	else{
		long fac = 1;
		
		char rn;
		printf("enter r for recursion or enter n for no recursion\n");
		scanf(" %c", &rn);
		
		if(rn == 'r'){
			printf("%d! is %li (recursion) \n", a, factorial(a));
			
			printf("try again? y/n\n");
			char yn;
			scanf(" %c", &yn);
	
			if(yn == 'y'){
				main();
			}
		}
		else if(rn == 'n'){
			for(int i = 1; i <= a; i++){
				fac = fac * i;
			}
			printf("%d! is %li (no recursion)\n", a, fac);
			
			printf("try again? y/n\n");
			char yn;
			scanf(" %c", &yn);
	
			if(yn == 'y'){
				main();
			}
		}
		else{
			printf("invalid answer\n");
			main();
		}
	
	}
	return 0;
}
