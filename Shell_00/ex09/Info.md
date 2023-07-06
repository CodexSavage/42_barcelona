El archivo mágico contiene patrones de datos y reglas que el comando file utiliza para realizar una "adivinanza" educada sobre el tipo de archivo en función de su contenido. El archivo mágico estándar en Linux se encuentra en /usr/share/misc/magic y se puede personalizar o ampliar según sea necesario.

Para crear un archivo magic, debemos seguir la siguiente estructura de datos:

```bash

	<offset> <strip> <atributis> <descripción>

```

	* <offset>: Especifica la posición inicial dentro del archivo donde se realizará la comprobación.

	* <tipo>: Indica el tipo de prueba que se realizará, como string para buscar una cadena específica, byte para comparar un byte en una posición dada, o search para buscar una secuencia de bytes.

	* <atributos>: Son los atributos adicionales para la prueba, como opciones de formato, máscaras, tamaños, etc.

	* <descripción>: Proporciona una descripción legible para el resultado de la prueba.

```bash

42 byte 42 42 file

```

también podría ser el caso de hacerlo así , en formato hexadecimal:

```bash

0x2a byte 0x2a 42 file

```
