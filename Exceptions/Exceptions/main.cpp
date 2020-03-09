#include<iostream>

//#define DIV_BY_ZERP
#define ARIPHM_OVERFLOW

int factorial(int n)
{
	unsigned int f = 1;
	for (int i = 1; i <= n; i++)
	{
		
			if (n > 12) throw std::exception("Error: Ariphemetical overflow");
			//std::cout << i << "! = ";
			f *= i;
			//std::cout << f << std::endl;
		
		
	}
	//std::cout << n << "! = " << f << std::endl;
	return f;
}

void main()
{
	setlocale(LC_ALL, "");
	system("color 0A");
#ifdef DIV_BY_ZERP
	int a, b;

	//
	//try
	//{
	//	std::cout << a / b << std::endl;
	//}
	//catch (...)
	//{
	//	std::cerr << "Something happend" << std::endl;
	//}

	try
	{
		std::cout << "Input two numbers: "; std::cin >> a >> b;
		system("cls");
		if (b == 0) throw std::exception("Деление на 0 ");
		std::cout << a / b;
	}
	catch (std::exception&e)
	{
		std::cout << e.what();
	}
	catch (...)
	{
		std::cerr << "Something happend" << std::endl;
	}
#endif // DIV_BY_ZERP

#ifdef ARIPHM_OVERFLOW
	int n;
	
	std::cout << "Input number: "; std::cin >> n;
	try
	{
		std::cout << n << "! = " << factorial(n) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
#endif // ARIPHM_OVERFLOW

}