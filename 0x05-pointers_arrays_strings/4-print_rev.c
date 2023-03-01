/**
 *function that prints a string in reverse
 */
void print_rev(char *s)
{
  int x = 0;
  while (str[x] != '\0')
    {
      _putchar(str[x]);
      x--;
    }
  _putchar('\n');
}
