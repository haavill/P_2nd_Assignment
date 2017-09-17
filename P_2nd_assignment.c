#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    printf("1. �޴�1\n2. �޴�2\n3. �޴�3\n");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("�޴�1�� ���õǾ����ϴ�.\n");
int PrimeNumber(int n);
{
	int n1, n2, i, k;
	
	printf("Enter two positive integers: ");
	scanf("%d %d", &n1, &n2);
	printf("Prime numbers between %d and %d are: ", n1, n2);
	
	for(i=n1+1; i<n2; ++i)
	{
		k = PrimeNumber(i);
		
		if(k == 1)
			printf("%d ", i);
	}
	return 0;
}

int PrimeNumber(int n)
{
	int p, k=1;
	
	for(p=2; p<=n/2; ++p)
	{
		if(n%p == 0)
		{
			k=0; break;
		}
	}
	return k;
}
    case 2:
        printf("�޴�2�� ���õǾ����ϴ�.\n");

int ArmstrongNumber(int n);
{
	int n, k;
	
	printf("Enter a positive integer: ");
	scanf("%d", &n);

	k = PrimeNumber(n);
	if (k == 1)
		printf("%d is a prime number.\n", n);
	else
		printf("%d is not a prime number!\n", n);

	k = ArmstrongNumber(n);
	if (k == 1)
		printf("%d is an Armstrong number.", n);
	else
		printf("%d is not an Armstrong number!", n);
	return 0;
}

int PrimeNumber(int n)
{
	int i, k = 1;
	
	for (i=2; i<=n/2; ++i)
	{
		if (n%i == 0)
		{
			k = 0; break;
		}
	}
	return k;
}

int ArmstrongNumber(int number)
{
	int originalNumber, remainder, result = 0, n = 0, k;
	originalNumber = number;
	while (originalNumber != 0)
	{
		originalNumber /= 10;
		++n;
	}
	originalNumber = number;

	while (originalNumber != 0)
	{
		remainder = originalNumber%10;
		result += pow(remainder, n);
		originalNumber /= 10;
	}

	if (result == number)
		k = 1;
	else
		k = 0;

	return k;
}
    case 3:
        printf("�޴�3�� ���õǾ����ϴ�.\n");
int Prime(int n);
{
	int n, i, k = 0;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	for(i=2; i<=n/2; ++i)
	{
		if(Prime(i) == 1)
		{
			if (Prime(n-1) == 1)
			{
				printf("%d = %d + %d\n", n, i, n - i);
				k = 1;
			}
		}
	}
	if (k == 0)
		printf("%d cannot be expressed as the sum of two prime numbers.", n);
	return 0;
}

int Prime(int n)
{
	int i, aPrime = 1;
	for(i=2; i<=n/2; ++i)
	{
		if(n%i == 0)
		{
			aPrime = 0; break;
		}
	}
	return aPrime;
}
    default:
        printf("�߸� �Է��ϼ̽��ϴ�.\n");
        break;
    }
    return 0;
}