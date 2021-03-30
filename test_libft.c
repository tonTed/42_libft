#include "../Unity/src/unity.h"
#include <string.h>
#include <ctype.h>
#include "./includes/header.h"

#include <stdio.h>

char 	*s1 = "Ecole 42";
char 	*s2 = "";

void 	func_test_ascii(int (*ft)(int), int (*f)(int ), int i)
{
	while (--i >= 0)
		TEST_ASSERT(ft(i) == f(i));
}

void	setUp(void )
// run before each test
{
};

void	tearDown(void)
// run after each test
{
};

void	test_ft_strlen(void)
{
	TEST_ASSERT(ft_strlen(s1) == strlen(s1));
	TEST_ASSERT(ft_strlen(s2) == strlen(s2));
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

int 	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strlen);
	RUN_TEST(test_ft_isalpha);
	RUN_TEST(test_ft_isdigit);
	RUN_TEST(test_ft_isalnum);
	RUN_TEST(test_ft_isascii);
}