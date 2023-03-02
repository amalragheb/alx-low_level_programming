/**
 * _strcmp - writes the character c to stdout
 * @s1: The character to print
 * @s2: dsfsdfsdfsdfd
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, res;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else
			res = s1[i] - s2[i];
		i++
	}

	return (res);
}
