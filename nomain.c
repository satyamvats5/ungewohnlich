#include <stdio.h>

#define decept(h,a,c,k,e,r) c##a##h##r

//The ## operator is known as token token pasting or token merging operator .
// we can merge two or more characters with this.
//
#define start decept(i,a,m,z,e,n)

int start() 
// here the preprocessor will replace the macro "start" with
// decept(i,a,m,z,e,n).
// Now according to definition of macro decept ,
// 3rd, 2nd, 1st and 6th characters from "iamzen" will be merged 
// and hence start will be replaced by main prior to the compilation.
// Here it is looking that we are not using main(), but this is just an illusion. 
{
	printf("Hello You have been decepted\n");
	return 0;
}
