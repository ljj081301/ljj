
//https://www.acmicpc.net/step
//http://codeup.kr/JudgeOnline/problemsetsol.php

#include "stdafx.h" //기본 헤더
#include <iostream> //cout, cin등 사용
#include <stdlib.h> //system("PAUSE") 사용
#include <Windows.h> // Sleep() 사용
#include <string> //스트링 객체 사용
#include <algorithm>//sort 함수 사용
#include <functional>//greater 내림차순 정렬

using namespace std;

/*
for 문
*/


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

/*
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
*/

/*
if문
*/

void test_rank()
{
	int score;
	string rank;
	cout << "시험 점수를 입력하세요.:";

	while (true)
	{
		cin >> score;

		if (score <= 100 || score >= 90)
		{
			rank = "A";
			break;
		}
			

		else if (score <= 89 || score >= 80)
		{
			rank = "B";
			break;
		}

		else if (score <= 79 || score >= 70)
		{
			rank = "C";
			break;
		}

		else if (score <= 69 || score >= 60)
		{
			rank = "D";
			break;
		}

		else if (score <= 59 || score >= 0)
		{
			rank = "F";
			break;
		}

		else
			cout << "0~100 사이의 숫자만 입력해주세요.\n";
	}
	
	cout << "시험 성적은 " << rank << "입니다.\n";
}

void secound_big() //두번째로 큰 수 출력
{
	//문자열(string)나누는 방법 모름
}

void special_middle()
{
	//999 나올때까지 값 리스트에 계속해서 추가

	int in_score = 1;
	int index = 0;
	double score_list[10];
	double new_score;
	double new_score_sum = 0;
	double m;
	double index_save;
	double arrange_score;
	
	cout << "시험점수를 입력하세요.\n(한 과목 입력후 엔터, 모든 입력후 '999'입력)\n";

	while (true)
	{
		cout << ">>";
		cin >> in_score;
		if (in_score == 999)
			break;
		if (in_score > 100)
		{
			cout << "100이하의 숫자만 입력해주세요\n";
			continue;
		}
		score_list[index] = in_score;
		index += 1;
	}

	index_save = index;

	sort(score_list, score_list + 10, greater<int>());

	m = score_list[0];

	for (index >= 0; index--;)
	{
		new_score = (score_list[index]/m)*100;
		cout <<"인덱스 적용 값"<< score_list[index]<<endl <<"최대점수"<< m <<endl<< "새로운점수" <<new_score<<endl;
		new_score_sum = new_score_sum + new_score;
	}

	arrange_score = new_score / index_save;

	cout << "점수들 합" << new_score_sum << endl;

	cout << "새로운 평균 값은 " << arrange_score << "입니다.";
}


/*
1차원 배열 사용하기
*/

void count_words() //문장의 단어 수 구하기
{
	//string 입력받음
	//토큰화, 배열에 저장
	//배열의 사이즈(개수) 출력
}

int main() //실행 희망시 주석표시 제거할 것
{
	cout << "for문 관련 예제 모음" << endl;


	//////////

	//num_sprint();

	//gugudan();

	//star_sprint();

	//n_add();

	//split_string();

	//test_rank();

	special_middle();

	//////////


	system("PAUSE");

	return 0;
}