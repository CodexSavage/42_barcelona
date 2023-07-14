# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int main( int argc, char *argv[]){
	
	char* w = (char*)malloc((strlen(argv[1]) +1 ) * sizeof(char));
	strcpy(w, argv[1]);
	printf("%s\n", w);

	free(w);
	return 0;

}

