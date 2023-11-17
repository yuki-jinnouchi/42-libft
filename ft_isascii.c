
int isascii(int c)
{
	if (c < 0 || 127 < c)
	{
		return (0);
	}
	return (1);
}
