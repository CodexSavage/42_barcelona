# Ejercicio 00: ft__putchar

La llamada al sistema write hace que los primeros bytes del buffer sean escritos en el archivo asociado con el descriptor de archivos fichero.   Envía el número de bytes escritos realmente. Puede ser menor que bytes si ha habido un error en el descriptor de archivos o si el controlador del dispositivo subyacente es sensible al tamaño del bloque. Si la función retorna 0, significa que no se han escrito datos. Si envía -1, ha habido un error en la llamada write, y el error se especificará en la variable global errno.

Es decir en otras palabras, la función de `ft_putchar` emplea la función `write` para escribir el caracter de la varible llamada c, la cual se le pasa como parámetro de la función en cuestión. `write` cuenta con el siguiente esquema de estructura:

```C

	int write ( int fichero, void* buffer, unsingned bytes) :

```

	* **fichero:** es el descriptor( entidad que proporciona información sobre un recurso o una entidad externa con la que el programa interactúa) del fichero sobre el que se pretende actuar. En nuestro caso estep primer elemento, al no hacer referencia a un descriptor (archivo relacionado), simplemente lanza el caracter que queremos como en mensaje a la salida estándard del sistema (imprime por pantalla).

	* **buffer:** es un apuntador al área de memoria donde se va a efectuar la transferencia. En términos simples, es donde el caracter de la variable "c", se almacenara  en una ubicación de memoria asignada para la variable `c` (char c ). Un ejemplo del lugar del almacenamiento de la variale "c" podría ser la siguiente dirección en memoria: "0x7ffeedf8226f". este es un formato hexadecimal de la dirección de memoria, donde realmente estaría almacenado.

	* **bytes:** es el tamaño en bytes que se van a transferir, en nuestro es 1, es decir, sólo se enviará un elemento
