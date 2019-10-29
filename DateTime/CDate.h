#pragma once
class CDate
{
	private:
		int m_iDay;
		int m_iMonth;
		int m_iYear;
	public:
		CDate(int year, int month, int day);
		void Display();
		~CDate() {};
};

