
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int modulo(int dividend, int divisor);
float multiply(float num1, float num2);
float subtract(float num1, float num2);
float divide(float n1,float n2);
float sum(float num1 , float num2);


int main() {

	float input1,input2,result=0.0;
	int op;
	scanf("%f %f",&input1,&input2);
	scanf("%d",&op);

	switch(op){
	case 1:
		result =sum(input1,input2);
		break;
	case 2:
		result =subtract(input1,input2);
		break;

	case 3:
		result =multiply(input1,input2);
		break;

	case 4:
		result =divide(input1,input2);
		break;

	case 5:
		result = modulo(input1,input2);
		break;

	default:
		printf("invalid input");
	}

	printf("%f",result);
    return 0;
}