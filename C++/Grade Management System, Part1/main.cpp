#pragma once
#include "����.h"

int main(void)
{
	grade stu[5];

	std::cout << "�� ���� ���α׷� ��" << std::endl;
	std::cout << "5���� ������ �����մϴ�. �̸��� ���� �Է��� �ּ���.(�����)" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << "�� �л��� �̸� : ";
		stu[i].in_name();
	}

	system("cls");

	int n;	//������ ���� �Է¹��� ����
	while (1)
	{
		pGrade(stu);	// Print all Grade
		std::cout << "����\n1. ���� ���� �Է�\n2. ���� ���� �Է�\n3. ���� ���� �Է�\n�� �� : ���α׷� ����" << std::endl;
		std::cin >> n;
		switch (n) {
		case 1:in_korean(stu); break;
		case 2:in_math(stu); break;
		case 3:in_english(stu); break;
		default: std::cout << "���α׷��� �����մϴ�"; goto exit;
		}

		system("cls");
	}
	exit:
	;
}