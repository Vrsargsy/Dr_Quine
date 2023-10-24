#include <stdio.h>
/*
	Skip me
*/
void func(void) {}

int main(void)
{
/*
	Skip me!
*/
	char *c = "#include <stdio.h>%1$c/*%1$c%2$cSkip me%1$c*/%1$cvoid func(void) {}%1$c%1$cint main(void)%1$c{%1$c/*%1$c%2$cSkip me!%1$c*/%1$c%2$cchar *c = %3$c%s%3$c;%1$c%2$cfunc();%1$c%2$cprintf(c, 10, 9, 34, c);%1$c%2$creturn (0);%1$c}";
	func();
	printf(c, 10, 9, 34, c);
	return (0);
}