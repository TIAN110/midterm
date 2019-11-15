#include <stdio.h>
main ()
{
	float x, y;
	char c;
 
	scanf("%f %f %c", &x, &y, &c);
	if(c == '+'){
		printf("The expression has a value of:%.1f", x + y);
	}else if(c == '-'){
		printf("The expression has a value of:%.1f", x - y);
	}else if(c == '*'){
		printf("The expression has a value of:%.1f", x * y);
	}else if(c == '/' && y != 0){
		printf("The expression has a value of:%.1f", x / y);
	}else if(c == '/' && y == 0){
		printf("Error:cannot divide a number by 0!");
	}
    
}