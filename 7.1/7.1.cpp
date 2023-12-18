#include <iostream>
/*11 вариант. Написать функцию n(x), значение которой равно 0, 
если x > 0, и единице во всех остальных случаях.
Вычислить для чисел A, B, C
n(A) + n(B) + n(C)*/
int foo(int x) 
{
	int n;
	if (x > 0) {
		n = 0;
	}
	else
	{
		n = 1;
	}
	return n;
}
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	a=foo(a);
	b=foo(b);
	c=foo(c);
	std::cout << a+b+c;

}