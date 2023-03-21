char *_strcat(char *dest, char *src)
{
  char *temp = dest;
  
  while (*dest)
    dest++;
  
  while ((*dest++ = *src++))
    ;
  
  return temp;
}

