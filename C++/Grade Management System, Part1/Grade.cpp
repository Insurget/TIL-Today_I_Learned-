#include "꺄핫.h"

grade::grade() :korean(0), english(0), math(0), sum(0), average(0)
{
}

void grade::in_sub()
{
	int num;
	if (num == 1)std::cin >> korean;
	else if (num == 2)std::cin >> math;
	else if (num == 3)std::cin >> english;
}
void grade::in_name()
{
	std::cin >> name;
} 

void grade::out_name()
{
	std::cout << name << std::endl;
}

void grade::out_grade()
{
	std::cout << std::setw(7)<< name << std::setw(9) << korean << std::setw(11) << english << std::setw(11) << math << std::setw(11) << sum << std::setw(11) << average << std::setw(10) << rank << std::endl;
}

void pGrade(grade *x)
{
	std::cout << std::setw(7) << "Name" << std::setw(8) << "국어" << std::setw(9) << "영어" << std::setw(9) << "수학" << std::setw(9) << "합계" << std::setw(9) << "평균" << std::setw(8) << "석차" << std::endl;
	std::cout << "=========================================================================" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		x[i].out_grade();
	}
	std::cout << "=========================================================================" << std::endl;

	int k_sum = 0, e_sum = 0, m_sum = 0;

	for (int i = 0; i < 5; i++)
	{
		k_sum += x[i].getKorean();
		e_sum += x[i].getEnglish();
		m_sum += x[i].getMath();
	}
	float k_average = (float)k_sum / 3.0, e_average = (float)e_sum / 3.0, m_average = (float)m_sum / 3.0;
	std::cout << std::setw(7) << "합계" << std::setw(7) << k_sum << std::setw(11) << e_sum << std::setw(11) << m_sum << std::setw(11) << m_sum + k_sum + e_sum << std::endl;
	std::cout.precision(2);
	std::cout << std::setw(7) << "평균" << std::setw(7) << k_average << std::setw(11) << e_average << std::setw(11) << m_average << std::setw(11) << m_average + k_average + e_average << std::endl;
}

//getter
std::string grade::getName()
{
	return name;
}

int grade::getEnglish()
{
	return english;
}

int grade::getKorean()
{
	return korean;
}

int grade::getMath()
{
	return math;
}
//getter

//5명의 성적을 한번에 받기 위한 함수 입니다.
void in_korean(grade *x)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << x[i].getName() << "의 국어 성적은 : ";
		x[i].in_korean();
	}
}

void in_math(grade *x)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << x[i].getName() << "의 수학 성적은 : ";
		x[i].in_math();
	}
}

void in_english(grade *x)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << x[i].getName() << "의 영어 성적은 : ";
		x[i].in_english();
	}
}

void grade::in_korean()
{
	std::cin >> korean;
}

void grade::in_math()
{
	std::cin >> math;
}

void grade::in_english()
{
	std::cin >> english;
}