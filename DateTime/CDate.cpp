#include <iostream>
#include "CDate.h"

using namespace std;

CDate::CDate(int year, int month, int day)
{
	if (year < 1970)
	{
		year = 1970;
	}

	if (month < 1 || month > 12)
	{
		month = 1;
	}

	int mod = month > 6 ? 1 : 0;
	int expected_day_max = (month % 2) == mod ? 30 : 31;
	expected_day_max = month == 2 ? 28 : expected_day_max;

	if (day < 1 || day > expected_day_max)
	{
		day = 1;
	}

	m_iYear = year;
	m_iMonth = month;
	m_iDay = day;
}

void CDate::Display()
{
	static char* months[] = {"?","January", "February", "March","April",  "May", "June", "July", "August", "September", "October", "November", "December"};
	cout << m_iYear << '.' << months[m_iMonth] << '.' << m_iDay << '.' << endl;
}
