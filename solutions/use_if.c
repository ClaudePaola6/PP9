#include <stdio.h>

const char* sign_of(int x) {
	    if (x > 0)
		            return "positive";
	        else if (x == 0)
			        return "zero";
		    else
			            return "negative";
}

int main() {
	    printf("sign_of(5) = %s\n", sign_of(5));
	        printf("sign_of(0) = %s\n", sign_of(0));
		    printf("sign_of(-3) = %s\n", sign_of(-3));
		        return 0;
}

