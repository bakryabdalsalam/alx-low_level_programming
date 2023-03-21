char *_strncat(char *dest, char *src, int n)
{
  char *temp = dest;
  
  while (*dest)
    dest++;
  
  while (n-- && (*dest++ = *src++))
    ;
  
  *dest = '\0';
  
  return temp;
}

