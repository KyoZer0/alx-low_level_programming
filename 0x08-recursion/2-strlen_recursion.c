/**
* _strlen_recursion - counts the length
*
* @s: pointer to the string
*
* Return: the length.
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
