#include "../Unity/src/unity.h"
#include <string.h>
#include <ctype.h>
#include "./includes/header.h"

#include <stdio.h>
#include <stdlib.h>

char 	*s_empty		= "";
char 	*s_42			= "School 42";
char	*s_print		= "~|@ < Hell0:\\";
char 	*s_ascii		= "#]\n F\bi4\t\r\a\v^A";
char 	*s_sp_finish	= "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. ";
char 	*s_sp_start		= " It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
char	*s_same			= "HHHHHHHHHHHHH";

char 	**s_tab;
int 	len_tab			= 7;
char** 	start()
{
	s_tab = (char **)malloc(sizeof(char*) * len_tab);
	s_tab[0] = s_empty;
	s_tab[1] = s_42 ;
	s_tab[2] = s_print ;
	s_tab[3] = s_ascii ;
	s_tab[4] = s_sp_start ;
	s_tab[5] = s_sp_finish ;
	s_tab[6] = s_same ;

	return s_tab;
}

void	setUp(void)
{
};

void	tearDown(void)
{
};

void 	func_test_ascii(int (*ft)(int), int (*f)(int), int i)
{
	while (--i >= 0)
		TEST_ASSERT(ft(i) == f(i));
}

void	test_ft_strlen(void)
{
	int i = 0;
	while (++i < len_tab)
		TEST_ASSERT(ft_strlen(s_tab[i]) == strlen(s_tab[i]));
}

void	test_ft_isalpha(void)
{
	func_test_ascii(&ft_isalpha, &isalpha, 128);
}

void	test_ft_isdigit(void)
{
	func_test_ascii(&ft_isalpha, &isalpha, 128);
}

void	test_ft_isalnum(void)
{
	func_test_ascii(&ft_isalnum, &isalnum, 128);
}

void	test_ft_isascii(void)
{
	func_test_ascii(&ft_isascii, &isascii, 200);
}

void	test_ft_isprint(void)
{
	func_test_ascii(&ft_isprint, &isprint, 128);
}

void	test_ft_toupper(void)
{
	func_test_ascii(&ft_toupper, &toupper, 128);
}

void	test_ft_tolower(void)
{
	func_test_ascii(&ft_tolower, &tolower, 128);
}

int 	main(void)
{
	start();

	UNITY_BEGIN();
	RUN_TEST(test_ft_strlen);
	RUN_TEST(test_ft_isalpha);
	RUN_TEST(test_ft_isdigit);
	RUN_TEST(test_ft_isalnum);
	RUN_TEST(test_ft_isascii);
	RUN_TEST(test_ft_isprint);
	RUN_TEST(test_ft_toupper);
	RUN_TEST(test_ft_tolower);

	free(s_tab);
}