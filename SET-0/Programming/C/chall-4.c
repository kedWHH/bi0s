#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
	int l[] = {1,2,3,2,7,7,9,9,10};
	int c = 0, f = atoi(argv[1]);
	for (int i = 0; i < f; i++){
		if (l[i]==f)
			{ c += 1;}
	}
	printf("Number of occurences of %d : %d", f, c);
}
