/**
 * _isdigit - checks if 'c' is a digit
 *
 * @c: the number passed to the function
 *
 * Return: 1 if 'c' is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}
