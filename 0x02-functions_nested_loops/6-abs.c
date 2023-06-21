/**
 * _abs - prints absolute value of an int
 *
 * @num: the number passed to the fanction
 *
 * Return: always returns a positive value of num
 */

int _abs(int num)
{

	if (num < 0)
		return (num * -1);
	else
		return (num);
}
