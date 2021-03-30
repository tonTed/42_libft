
int 	ft_isalpha(int _c)
{
	return ((_c >= 'a' && _c <= 'z') || (_c >= 'A' && _c <= 'Z')) ? 1 : 0;
}