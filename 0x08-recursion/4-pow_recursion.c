#include "main.h"
/**
 * _pow_recursion - prints x power y
 * @x: main number
 * @y: power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
