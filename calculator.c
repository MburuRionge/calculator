#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int mmain(int argc, char *argv[])
{
	float valueone;
	float valuetwo;
	float answer;
	char operator;

	printf("Enter calculation :\n\n");
	scanf("%f %c %f, &valueone, &operator, &valuetwo);
	switch(operator)
	{
		case '/': answer = valueone / valuetwo;
			  break;
		case '*': answer = valueone * valuetwo;
			  break;
		case '+': answer = valueone + valuetwo;
			  break;
		case '-': answer = valueone - valuetwo;
                          break;
		case '^': answer = pow(valueone, valuetwo);
                          break;
		case '<>': answer = sqrt(valuetwo);
                          break;
		default: goto fail;
	}

	printf("%0.9g, %c, %0.9g = %0.6g\n\n", valueone, operator, valuetwo, answer);
	goto exit;
	fail;
	printf("Fail.\n");
	exit;
	return 0;
}
