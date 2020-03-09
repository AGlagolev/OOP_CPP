#include<iostream>

void main()
{
	setlocale(LC_ALL, "");
	system("color 0A");
	int a,b;
	
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
		std::cout << a/ b;
	}
	catch (std::exception&e)
	{
		std::cout << e.what();
	}
	catch (...)
	{
		std::cerr << "Something happend" << std::endl;
	}
}