/**
 * BRAINFLUB COMPILER, WRITTEN IN THE C LANGUAGE
 * 
 * CREATED BY ARYANTECH123 (https://github.com/ARYANTECH123)
 * LANGUAGE BY SNOREPION (https://github.com/snorepion)
 * 
 * LEARN THE LANGUAGE AT https://esolangs.org/wiki/Brainflub
 * 
*/


#include <stdio.h>
#include <string.h>

int main(int argc, char*argv[]) {

	FILE *fp=fopen(argv[1],"r");

	//Declaring all the strings
	char in[999];
	char out[999];
	char n[999];
	char code[99999];
	char c;

	//Initializing string variables
	in[0] = ' ';
	for(int i=0; (c=fgetc(fp)) != EOF; i++)
		code[i]=c;

	//Initializing the acuumulator
	int ac=0;

	//Main program loop
	for(int i=0; code[i] != '\0'; i++) {

		//Each elseif corrosponds to one operation
		if(code[i] == '+')
			ac+=1;
		else if(code[i] == '-')
			ac-=1;
		else if(code[i] == 'd')
			ac *= 2;

		else if(code[i] == '='){
			char s = ac;
			strncat(out, &s, 1);
		}
		else if(code[i] == ' ')
			gets(in);
		else if(code[i] == '*')
			strcat(out, in);
		else if(code[i] == '.')
			printf(out);
		else if(code[i] == ',')
			strcpy(out, "");

		else if(code[i] == '|'){
			printf(out);
			break;
		}

		else if(code[i] == ':'){
			strcpy(out, "");
			printf(code);
			break;
		}

		else if(code[i] == '~')
			ac = 0;
	}

	return 0;
}
