#include <stdio.h>
/**
 *  _pow_recursion - function with parameters
 *  @x: parameter tested
 *  @y: raised to its power
 *  Return: always success
 *  resut - holds value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		int result =  x * _pow_recursion(x, y - 1);

		return (result);
	}
}
