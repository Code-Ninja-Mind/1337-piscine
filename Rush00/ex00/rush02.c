void	ft_putchar(char c);

void	ft_print(int height, int width, int x, int y)
{
	if ((height == 0 && width == 0) || (height == 0 && width == x - 1))
		ft_putchar('A');
	if ((width > 0 && width < x - 1 && height == 0) || (width > 0 && width < x
			- 1 && height == y - 1))
		ft_putchar('B');
	if ((height > 0 && width > 0) && (width < x - 1 && height < y - 1))
		ft_putchar(' ');
	if ((height == y - 1 && y != 1) && (width == 0 || width == x - 1))
		ft_putchar('C');
	if ((width == 0 && height > 0 && height < y - 1) || (width == x - 1
			&& height > 0 && height < y - 1))
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	height;
	int	width;

	height = 0;
	if (x > 0 && y > 0)
	{
		while (height < y)
		{
			width = 0;
			while (width < x)
			{
				ft_print(height, width, x, y);
				width++;
			}
			ft_putchar('\n');
			height++;
		}
	}
}
