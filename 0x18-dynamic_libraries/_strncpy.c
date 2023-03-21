char *_strncpy(char *dest, char *src, int n)
{
  char *temp = dest;
  
  while (n-- && (*dest++ = *src++))
    ;
  
  while (n-- > 0)
    *dest++ = '\0';
  
  return temp;
}

