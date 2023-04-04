/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n){
  unsigned int index;
  index = 0;
    while (index < n){

      dest[index]=src[index];
      index++;
      
    }
  return(dest);
}
