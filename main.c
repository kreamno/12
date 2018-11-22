#include <stdio.h>
#include <stdlib.h>
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	FILE *fp;
	char input[100];
	char word[100];
	char filename[100];

	printf("file name: ");
	scanf("%s", filename);
	
	fp = fopen(filename, "r");
	
	printf("input a word to find : ");
	scanf("%s", word);
	
	while(fgets(input, 100,fp)!= NULL)
	{
		if (strncmp(input, word, strlen(word))==0){
		printf("find a word %s\n", input);
	}
		//if (strcmp(input, word) == 0) 길이 지정 하지 않음. 
			/*strncmp는 측정하는 길이를 일정하게 제한할 수 있음, strcmp랑 다름
			[strncmp(문자열1,문자열2,N);]
			로 쓴다. N은 문자열의 길이.*/ 
		
	}

	printf("search done!\n");
	
	fclose(filename);

	return 0;
}
