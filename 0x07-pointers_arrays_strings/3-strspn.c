/**
 *  _strspn - gets the length of a prefix substring
 * @s: string
 * @a: substring
 * Return: number of bytes in the initial segment
 * of @s which consist only of bytes from @a
 */
unsigned int _strspn(char *s, char *a)
{
	unsigned int count = 0, flag = 1, j, finder = 0, k = 0;

	if (!s || !a)
		return (0);
	while (s[k] != '\0' && flag == 1)
	{
		finder = 0;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[k] == a[j])
			{
				finder = 1;
				break;
			}
		}
		if (finder == 1)
			count++;
		if (finder == 0)
		{
			flag = 0;
			break;
		}
		k++;
	}
	return (count);
}
