#pragma once
class CDate
{
	private:
		int m_iDay;
		int m_iMonth;
		int m_iYear;
		inline int max(int a, int b) { return (a > b) ? a : b; }
		inline int min(int a, int b) { return (a < b) ? a : b; }
	public:
		CDate(int year, int month, int day);
		int GetDay()		{ return m_iDay; }
		int GetMonth()		{ return m_iMonth; }
		int GetYear()		{ return m_iYear; }
		void SetDay(int day);
		void SetMonth(int month);
		void SetYear(int year);
		void Display();	
		~CDate() {};
};

