#include <stdio.h>

int array[3000];
int count = 0;

int drome(int n)
{
    int reversedInteger = 0, remainder, originalInteger;

    originalInteger = n;

    // reversed integer is stored in variable 
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
		array[count]=originalInteger;
		count++;
		return 0;	
	}
    	return 1;
}

int main()
{
	int b = 999;

        for(b; b > 100; b--)
	{
		int a = b;
		for(a; a > 100;a--)
		{
			int c = a * b;
			if (drome(c) == 0) {
					
			}
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





























