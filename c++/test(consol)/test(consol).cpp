#include <stdafx.h>
#include <iostream>
#include <Windows.h>

using namespace std;

int SmallNum(int, int);

int sum(int);


int main(void)
{
	int result;

	result = SmallNum(4, 6);

	cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;

	result = SmallNum(8, 6);

	cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;

	result = SmallNum(2, 8);

	cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;

	Sleep(2000);

	result = sum(5);

	cout << "1부터 5까지 더한 값은" << result << "입니다.";

	Sleep(2000);

	return 0;
}



int SmallNum(int num1, int num2)
{
	if (num1 <= num2)
	{
		return num1;
	}

	else
	{
		return num2;
	}
}

int sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i;
	}

	return result;
}


