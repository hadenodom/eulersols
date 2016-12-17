#include <stdio.h>

int array[3000]; 	//initialize array for palindromic products to go into
int count = 0; 		//counter for array

int drome(int n)
{
    	int reversedInteger = 0, remainder, originalInteger; // variables
    	originalInteger = n; // assign variable to what was passed
	
	// reverse passed variable
    	while( n!=0 )  
    	{
        	remainder = n%10; 
        	reversedInteger = reversedInteger*10 + remainder;
        	n /= 10; 
    	}

    	// palindrome if orignalInteger and reversedInteger are equal
	if (!(originalInteger == reversedInteger)){
	}
		
	else{
		array[count]=originalInteger; 	// assign to array
		count++;			// return a zero to calling function
		return 0;		
	}
    	return 0;				// return a 1 for no palindrome
}

int main()
{	// let's start finding products of 3-digit numbers, with 999 on each side
	int b = 999; 

        for(b; b > 99; b--) 		// keep executing below until b is 100
	{
		int a = b;		// See Note A in below comments.
		for(a; a > 100;a--)	// same as earlier, but with a	
		{
			int c = a * b;	// product assigned to c
			drome(c); 	// let the drome function determine palindromeness	
					// the function will print to array if variable Charlie (c) is a palindrome.  	
		}
	}
	
	/// Find largest in array when it's all said and done
	int i, num, largest;
	largest = array[0];
	for (i = 0; i < 1000; i++) {
		if (array[i] > largest) {
			largest = array[i];
		}
	}
	printf("%d", largest);


}







// NOTE A - This program has to go through every single product of two three-digit numbers.
// It does this by taking 999, multiplying it by every number from 999 to 100, and then does the same for 998, and so on.  But once it's multiplied 999 and 998, it doesn't need to multiply 998 and 999.  To avoid repeating multiplications, the Bravo variable (int b) is set to the Alpha variable (int a) before the second for statement in main().  That way, after 999*(everthing from 999-100), it never multiplies by 999 again.  Because B is set to A, and A is 998 on the second loop, it starts with 998 by 998 and works down, then it starts with 997 by 997 and works down, and so forth, all the way to 100 by 100.  
// Todo - comment further, clean up code, redo in another language





















