# Ejercicio 01: ft__print__alphabet

Para nuestro conocimiento, un ordenador trabaja bajo en conjunto de elementos de 0 y 1, lo que se conoce como binario y esto es debido a los pulsos eléctricos que se generan dentro de nuestro computador. Para el caso de 1, es debido a picos de tensión y el 0 a la ausencia de ellos. A partir de ahí, lo que nosotros vemos es una interpretación de éstos a nuestro lenguaje, pero realmente se comunica con nostros en código binario, 0 y 1, es como un traductor.

Para hacer este caso demos direnciar dos aspectos clave, el uso de " " y ' '. En el primer caso a hablamos de texto plano o secuencia de catácteres (string) y en el segundo hablamos de carácteres individuales (char). Un ejemplo para ambos casos:

## CHAR

```C

# include <unistd.h>

int main(){
	char  r;
	r = 'a';
	print ("%d", a );

}

```

El valor de salida por pantalla si ejecutamos el el script es el siguiente:

```bash

>>> gcc example1.c
>>> ./a.out
97

```

El valor que vemos por pantalla se debe gracias al paramétro que especificamos en el print `%d`, el cual nos imprime valores enteros con signo. Como vimos anteriormente a cada uno de los carácteres se los asocia un número concreto al cuál hacen referencia, esto se puede consulitar en la conocida [tabla ASCII ](https://elcodigoascii.com.ar/). Ahora bien si sólo quisiéramos imprimir el valor como "a" sustituiríamos el valor de `%d` por `%c`.

```

## STRING

```C

# include <unistd.h>

int main(){
	
	string w 
	w = "file"
	print ("%s", w)

}

El valor de slida por pantalla si ejecutamos el script es el siguiente:

```bash

>>> gcc example2.c
>>> ./a.out
file

```

En estos casos al utilizar la variable tipo string, le estamos diciendo al sistema que queremos imprimir un conjunto de carácteres. Estos no son nada más que múltiples char agrupados entre sí.

> **Nota** si queremos emplear " " en variables tipo char no funcionaará ya que es como intentar guardar un string en char, aunque sea así `char r = "a"`, no funcionará ya que el simple hecho de que este `" "`, le da conocer al sistema que se quiere guardar un conjunto de carácteres.

> **Nota:** aunque se emplee bien el térmmino de `' '` con char, sólo leerá el primer carácter. Si por ejemplo tenemos `char r = "libro"`, nos saldrá un error y nos dirá que el tamaño es demasiado largo.

```

## Explicación

De los carácteres ASCII imprimibles de la tabla ASCII. Podemos en ella comprobar como el conjunto de elementos del abecedario está ordenado a partir de **a** (97) hasta **z** (122), por lo que teniendo en cuenta esto, simplemente tendríamos que iterar el valor de la variable. Por ejemplo:

```text

        si a = 97

        b = a + 1 = 97 +1

```

Así sucesivamente hasta z o bien 122, como deseemos:

```C

# include <stdio.h>
# include <unistd.h>

void ft_print_alphabet(void){
        char word ;
        word = 'a';
        while ( word <= 'z' ){
                write(1, &word, 1);
                word++;
        }
}

int main(){
			
        ft_print_alphabet();
        return 0;
}

```


