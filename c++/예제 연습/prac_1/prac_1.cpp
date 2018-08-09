
//https://www.acmicpc.net/step

#include "stdafx.h" //기본 헤더
#include <iostream> //cout, cin등 사용
#include <stdlib.h> //system("PAUSE") 사용
#include <Windows.h> // Sleep() 사용
#include <string> //스트링 객체 사용

using namespace std;

void num_sprint() //N 찍기
{
	int i;
	cout << "정수를 입력하세요.:";
	cin >> i;

	for (int n = 3; n>0; n--)
	{
		cout << i << endl;
		i++;
		Sleep(400);
	}

	Sleep(1000);

	for (i > 0; i--;)
	{
		cout << i << endl;
		Sleep(50);
	}
}


void gugudan() //구구단
{
	int dan;
	cout << "구구단 몇단을 실행할까요?:";
	cin >> dan;

	for (int gop = 1; gop < 10; gop++)
	{
		cout << dan << " * " << gop << " = " << dan * gop << endl;
	}

}

void star_sprint() //별 찍기
{
	int star_count;
	cout << "별을 몇줄 만들까요?:";
	cin >> star_count;

	for (star_count > 0; star_count--;) {

		for (int n = 0; n < star_count; n++); {
			cout << "★";
		}

		cout << endl;
	}
}

void n_add() //n까지의 합 구하기
{
	int num;
	int num_result = 0;
	cout << "몇까지 더할까요?:";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		num_result = num_result + i;
	}

	cout << "\n1부터 " << num << "까지의 합은 " << num_result << "입니다." << endl;
}

void split_string() //문자열 10글자씩 나누기
{
	string text;
	string split_text;
	cout << "긴 문자열을 10글자씩 자릅니다.\n문자열을 입력하세요.:";
	text = cin.get();

	if (text.length <= 10)
	{
		cout << "잘린 문자열:\n" << text << endl;
	}
	
	else if (text.length > 10)
	{
		for (int i = 0; i <= text.length; i++)
		{
			split_text.append = text[i];

			if (split_text.length = 10)
			{
				cout << split_text << endl; 
			}
		}
	}

}

int main() //실행 희망시 주석표시 제거할 것
{
	cout << "for문 관련 예제 모음" << endl;


	//////////

	//num_sprint();

	//gugudan();

	//star_sprint();

	//n_add();

	split_string();

	//////////


	system("PAUSE");

	return 0;
}