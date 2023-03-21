char *_strcpy(char *dest, char *src)
{
  char *temp = dest;
  
  while ((*dest++ = *src++))
    ;
  
  return temp;
}

