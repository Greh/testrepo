#include <stdio.h>

int main(int argc, char *argv[]){
	int i;
        printf("number of args: %i\n",argc);
	for(i=1; i<argc; i++){
		printf("argument: %i\n",atoi(argv[i]));
	}
	return 0;

}
