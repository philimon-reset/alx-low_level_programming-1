/**
 * _isalpha - checks whether a char is an alphabet or not
 * @c: the char to be checked
 *
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
