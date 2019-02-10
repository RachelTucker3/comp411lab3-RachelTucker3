#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

	int n;

	printf("Please enter the starting number of the Collatz sequence:\n");
	scanf("%d", &n);
	printf("%d, ", n);


	while(n != 1) {

		if(n%2 == 0) {

			n = n/2;
			if(n == 1) {
				printf("1\n");
			}else {
				printf("%d, ", n);
			}

		} else {
			n = (3*n) + 1;
			if(n == 1) {
				printf("1\n");
			}else {
				printf("%d, ", n);
			}

		}

	}





}
