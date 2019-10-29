#include <iostream>
#include "CDate.h"

using namespace std;

CDate::CDate(int year, int month, int day)
{
	SetMonth(month);
	SetDay(day);
	SetYear(year);
}

void CDate::SetDay(int day)
{
	static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	m_iDay = max(1, day);
	m_iDay = min(m_iDay, length[m_iMonth]);
}

void CDate::SetMonth(int month)
{
	m_iMonth = max(1, month);
	m_iMonth = min(m_iMonth, 12);
}

void CDate::SetYear(int year)
{
	m_iYear = max(1, year);
	m_iYear = min(1970, m_iYear);
}

void CDate::Display()
{
	static char* months[] = { "?","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	cout << m_iYear << '.' << months[m_iMonth] << '.' << m_iDay << '.' << endl;
}
