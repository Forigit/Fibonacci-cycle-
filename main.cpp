#include<iostream>

// ??? ?????????????????? ????????? - ??????? ????? ????? ?? ????????? ????????? ? ????????? ??????????? ?????????????????? ????????? ?? ????? ????? ?????.

// ? ??? ?? ?? ???????? ??????? ???? ?? ????? ??????? ????????? ??????? ????? ????????? ?????????? _int64

using namespace std;

void num(_int64 z)
{
	cout << " ???????? ????? :" << z << endl << endl;

	_int64  a, b, i; // _int64 ???? ????? ??? ? ??????? int ?????? ??????????? ?????? (?? -9 223 372 036 854 775 808 ?? 9 223 372 036 854 775 807)

	bool qwe = true; // ????? ??? ???? ??? ?? ? ????? While ?????? ???????? ? ???????? if ?? else if

	a = 0;
	b = 1;

	i = 0; // ? ??? ?????????? ?? ?????????? ?????????


	while (i < z) // ??????? ??? ??????? ???? ????? ????????
	{
		if (qwe == true)
		{
			i = a + b; // ????????? ????????? 
			a = i; // ? ??????????? ????????? i ? a
			qwe = false; // ??????????? qwe ???????? false ??? ?? ??? ????????? ???????? ????????? ????? ? else if
		}
		else if (qwe == false)
		{
			i = a + b; // ????????? ????????? 
			b = i; // ? ??????????? ????????? i ? b
			qwe = true; // ??????????? qwe ???????? true ????? ??? ????????? ???????? ????????? ????? ? if
		}
		cout<<" ?????????????????? :" << i << endl; // ??????? ?????????
	}

}

void num1()
{
	cout << endl << endl << endl;

	_int64 a,b,i;
	bool qwe = true;

	a = 0;
	b = 1;
	i = 0;


	for (size_t j = 0; j < 91; j++) // 91 ??? ??????????? ????? ? ??????? ????????? ??????? _int64 ?????? ????????? ?????? 91-??? ????? ???????????? ????????? 
	{
		if (qwe == true)
		{
			i = a + b;
			a = i;
			qwe = false;
		}
		else if (qwe == false)
		{
			i = a + b;		
			b = i;
			qwe = true;
		}
		cout << " ???? :" << i << endl;
	}

}

int main()
{
	setlocale(LC_ALL, "ru");

	_int64 a;
	cin >> a; // ?????? ?????
	cout << endl;
	num(a); // ???????? ??????? ? ???????? ????????? ?????????
	
	num1();

	return 0;
}
