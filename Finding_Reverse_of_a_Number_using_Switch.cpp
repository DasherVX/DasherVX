#include <stdio.h>

int main (){
	
	int num, x;
	int d1,d2,d3,d4,d5,d6; //d means digit
	int rd; //remaining digits
	int digit = 0;
	
	
do{
	printf("This will look for the reverse of a 6-digit integer.\n\n");

	printf("Enter a six-digit integer: ");
	scanf("%d", &num);
	
	x = num;
	
	d6 = num / 100000;
	rd = num % 100000;
	d5 = rd / 10000;
	rd = rd % 10000;
	d4 = rd / 1000;
	rd = rd % 1000;
	d3 = rd / 100;
	rd = rd % 100;
	d2 = rd / 10;
	rd = rd % 10;
	d1 = rd;
	
	do { x /=10;
		 ++digit;}
	while (x!= 0);
	

	
	switch (digit) {
		case 6:
			printf("%d in reverse is : %d%d%d%d%d%d\n", num,d1,d2,d3,d4,d5,d6);
			digit=0;
			printf("_________________________________________________________\n");
			printf("_________________________________________________________\n\n\n");
			break;
			
		case 5:
			printf("%d in reverse is : %d%d%d%d%d\n", num,d1,d2,d3,d4,d5);
			digit=0;
			printf("_________________________________________________________\n");
			printf("_________________________________________________________\n\n\n");
			break;
			
		case 4:
			printf("%d in reverse is : %d%d%d%d\n", num,d1,d2,d3,d4);
			digit=0;
			printf("_________________________________________________________\n");
			printf("_________________________________________________________\n\n\n");
			break;
			
		case 3:
			printf("%d in reverse is : %d%d%d\n", num,d1,d2,d3);
			digit=0;
			printf("_________________________________________________________\n");
			printf("_________________________________________________________\n\n\n");
			break;
			
		case 2:
			printf("%d in reverse is : %d%d\n", num,d1,d2);
			digit=0;
			printf("_________________________________________________________\n");
			printf("_________________________________________________________\n\n\n");
			break;
			
		case 1:
			printf("%d in reverse is : %d\n", num,num);
			digit=0;
			printf("_________________________________________________________\n");
			printf("_________________________________________________________\n\n\n");
			break;
	}
}

while (digit<7);

	
	return 0;
}


