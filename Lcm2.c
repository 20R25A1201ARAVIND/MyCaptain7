#include <stdio.h>
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int lcm(int a, int b)
{
	return (a*b/ gcd(a, b));/*  (a*b)=LCM(ab)*GCD(ab)=>LCM=(a*b)/GCD  */
}
int main()
{
	int a,b;
	printf("Input first number:");
	scanf("%d",&a);
	printf("Input second number:");
	scanf("%d",&b);
	printf("LCM of %dand%d=%d ", a, b, lcm(a, b));
	return 0;
}
