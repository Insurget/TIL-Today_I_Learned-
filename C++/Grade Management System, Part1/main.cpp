#pragma once
#include "꺄핫.h"

int main(void)
{
	grade stu[5];

	std::cout << "★ 성적 프로그램 ★" << std::endl;
	std::cout << "5명의 성적을 관리합니다. 이름을 먼저 입력해 주세요.(영어로)" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << "번 학생의 이름 : ";
		stu[i].in_name();
	}

	system("cls");

	int n;	//선택을 위해 입력받을 변수
	while (1)
	{
		pGrade(stu);	// Print all Grade
		std::cout << "선택\n1. 국어 성적 입력\n2. 수학 성적 입력\n3. 영어 성적 입력\n그 외 : 프로그램 종료" << std::endl;
		std::cin >> n;
		switch (n) {
		case 1:in_korean(stu); break;
		case 2:in_math(stu); break;
		case 3:in_english(stu); break;
		default: std::cout << "프로그램을 종료합니다"; goto exit;
		}

		system("cls");
	}
	exit:
	;
}