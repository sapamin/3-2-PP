#include<bits/stdc++.h>
#include "time.h"
#include <ctime>

thisyear::thisyear(){
    ndate[11]=month_day[];
	NewyearDay;
	tyear;
}
int gettime(){
	time_t timer;
	struct tm* t;
	timer =time(NULL);
	t=localtime(&timer);
	thisyear.tyear=t->tm_year+1900;
	ctime(thisyear.tyear,1,1,1,0,0);
	int dayofweek=time.Getdayofweek();
	thisyear.NewyearDay=dayofweek[0];
}

void Leapyear(int tyear)//윤년 확인 
{
    if ((tyear % 4 == 0 && tyear % 100 != 0) || (tyear % 400 == 0))
        ndate[1] = 29;
}

int totalday(int month,int day,int ndate[11])//요일차 ,7로 나누어서 요일 계산 
{
	for(i=0;i<month;i++){
		daysum+=ndate[i];
		}
	daysum+=day;
	daysum+=Newyearday;
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
 


 

