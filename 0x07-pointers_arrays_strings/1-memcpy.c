/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: memory area to copy to
 *
 * @src: source
 *
 * @n: n byte to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
