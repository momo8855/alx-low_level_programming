/**
  * sqrt_helper - performs a binary search to find the square root
  *
  * @n: the number n to find the square root of
  * @low: the lower bound low of the search interval
  * @high: the upper bound high of the search interval
  *
  * Return: squre root
  */
int sqrt_helper(int n, int low, int high)
{
	int mid, square;

	mid = (low + high) / 2;
	square = mid * mid;
	if (square == n)
	{
		return (mid);
	}
	else if (low == high)
	{
		return (-1);
	}
	else if (square < n)
	{
		return (sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (sqrt_helper(n, low, mid - 1));
	}
}
/**
  * _sqrt_recursion - returns the natural square root of a number
  *
  * @n: the number to return the square root of
  *
  * Return: the squre root
  *	or If n does not have a natural square root, the function should return -1
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (-1);
	}
	else if (n >= 16777216)
	{
		return (sqrt_helper(n, 1, 5000));
	}
	else 
	{	
		return (sqrt_helper(n, 1, n));
	}
}
