#include<bits/stdc++.h>
#include "settime.h"
#include <ctime>

settime::settime(){
    ndaysum[11]=month_day[];
    ndate[11];
	firstday[11];
	tyear;
	temp1;
	temp2;	
}

void settime::gettime(){
	time_t timer;
	struct tm* t;
	timer =time(NULL);
	t=localtime(&timer);
	thisyear.tyear=t->tm_year+1900;
	temp1=t->tm_wday;//요일 
	temp1--;
	temp2=t->tm_yday;
	firstday[0] =7+temp1-((temp2-1)%7);
}

void settime::Leapyear(int tyear)//윤년 확인 
{
    if ((tyear % 4 == 0 && tyear % 100 != 0) || (tyear % 400 == 0))
        {
		ndaysum[1] = 29;
		}
    for(n=1;n<12;n++){
        firstday[n]=((ndaysum[n]%7)+firstday[0])%7;
	}
}

int settime::totalday(int month,int date,int firstday[11])//요일차 ,7로 나누어서 요일 계산 
{

	daysum=((date-1)%7+firstday[date])%7
	return daysum; 	
}



 


 

