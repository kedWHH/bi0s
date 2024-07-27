#include <stdio.h>
#include <string.h>

void main(){
	char st[100];
	printf("Enter string : ");
	fgets(st,100,stdin);
	int i,c=0,l = strlen(st);
	for(i=0;i<l;i++){
		if (strchr("AEIOUaeiou", st[i]) != NULL){
			c = c + 1;
}
}
	printf("No. of vowels : %d", c);
}
