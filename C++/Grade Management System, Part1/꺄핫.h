#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class grade
{
private:
	std::string name;
	short korean, math, english;
	short sum;
	float average;
	short rank = 0;
public:
	int getKorean();
	int getMath();
	int getEnglish();
	std::string getName();
	void in_sub();
	void in_name();
	void out_name();
	void out_grade();
	void in_korean();
	void in_math();
	void in_english();
	grade();
};

void pGrade(grade *x);
void in_english(grade *x);
void in_korean(grade *x);
void in_math(grade *x);