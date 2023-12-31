/**
 * _isalpha - checks if a char is an alphabetic character or not.
 *
 * @c: c is the character we want to check.
 *
 * Return: the func returns (1) if c is an alphabetic character and (0) if not.
 */

int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);

}
