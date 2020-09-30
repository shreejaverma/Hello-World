// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
int i; //i is index
int A[0];

  for(i=0; i<num; i++)

   scanf("%d\n",&A[i]);

  for(int j=num-1; j>=0; j--)
   printf("%d\n",A[j]);

return 0;
}
