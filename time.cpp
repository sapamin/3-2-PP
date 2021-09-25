#include "time.h"
today::today(){
    ndate[11]=month_day[];
	NewyearDay=	CTime time(int year, 1, 1, 1, 0, 0);
	tyear=;
} 

void date(int )



void Leapyear(int tyear)
{
    if ((tyear % 4 == 0 && tyear % 100 != 0) || (tyear % 400 == 0))
        ndate[1] = 29;
}

int datefind(int month,int day,int ndate[11])//요일 판단 
{
	CTime time(int year, 1, 1, 1, 0, 0);
    int day_of_week = time.GetDayOfWeek();
	for(i=0;i<month;i++){
		daysum+=ndate[i];
		}
	daysum+=day;
	daysum+=Newyearday;
	daysum=daysum%7;
	return daysum; 	
}
int nextweekdate(int month,int day,int ndate[11]) //같은요일 다음주 검색
{
	if (day+7>ndate[month-1]){
		return month+1,(day+7)-ndate[month-1];
		
	}
	else 
	{
	return month,day+7;
	}
 } 

 

