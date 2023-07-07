# include <stdio.h>
# include <unistd.h>

void ft_print_alphabet(void){
	char word ;
	word = 'a';
	while ( word <= 'z' ){
		write(1, &word, 1);
		word++;
	}
	char r = 'b';
	printf("\n%c", r);
	//printf( "\n%d", r );
}

int main(){

	ft_print_alphabet();
	return 0;
}
