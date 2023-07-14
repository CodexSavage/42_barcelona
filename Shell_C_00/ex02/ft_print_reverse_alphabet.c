# include <stdio.h>
# include <unistd.h>

void ft_print_reverse_alphabet(void){
	char word ;
	word = 'z';
	while ( word >= 'a' ){
		write(1, &word, 1);
		word--;
	}
}

int main(){

	ft_print_reverse_alphabet();
	return 0;
}
