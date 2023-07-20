/**
 * isupper - a function that checks for upper cases
 * @c: an integer
 *Return: always 0 (sucsess)
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
