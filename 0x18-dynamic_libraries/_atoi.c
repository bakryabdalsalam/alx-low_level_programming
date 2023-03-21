int _atoi(char *s)
{
  int num = 0;
  int sign = 1;
  
  while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '\f' || *s == '\v')
    s++;
  
  if (*s == '-')
  {
    sign = -1;
    s++;
  }
  else if (*s == '+')
  {
    s++;
  }
  
  while (*s >= '0' && *s <= '9')
  {
    num = num * 10 + (*s - '0');
    s++;
  }
  
  return sign * num;
}

