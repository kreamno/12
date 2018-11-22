#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[100] = "Programming course";
	int i=0;	//문자 수를 세는 변수 
	
	while(src[i] != '\0'){
		i++;
	}
	
	printf("문자열\"%s\"의 길이: %i\n", src, i);
	printf("%i", strlen(src));
	
	return 0;
}
