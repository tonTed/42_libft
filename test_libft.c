#include "../Unity/src/unity.h"
#include "./src/ft_strlen.c"
#include <string.h>

char 	*s1 = "Ecole 42";
char 	*s2 = "";

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

int 	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strlen);
}