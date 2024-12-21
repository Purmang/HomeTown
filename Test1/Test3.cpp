#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//int GCD(int a, int b)
//{
//	while (b != 0)
//	{
//		int temp = a % b;
//		a = b;
//		b = temp;
//	}
//	return a;
//}

int main()
{
	char n;
	int n1{ 0 }, n2{ 0 };
	while ((n= cin.get())!=EOF)
	{
		cin.ignore();
		switch (n)
		{
		case 'a':
			n1++;
			break;
		default:
			n2++;
			break;
		}
	}
	cout << "¾ËÆÄºª È½¼ö:" << n1 << "\n±× ¿ÜÈ½¼ö:" << n2;
}