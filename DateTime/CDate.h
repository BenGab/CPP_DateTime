#pragma once
class CDate
{
	private:
		int m_iDay;
		int m_iMonth;
		int m_iYear;
		inline int max(int a, int b) { return (a > b) ? a : b; };
		inline int min(int a, int b) { return (a < b) ? a : b; };
	public:
		CDate(int year, int month, int day);
		void Display();
		~CDate() {};
};

