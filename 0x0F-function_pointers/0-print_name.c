/**
 * print_name - print name using pointer to function
 *
 * @name: the string
 *
 * @f: pointer to function
 **/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
