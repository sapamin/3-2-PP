#include <iostream>
#include <ctime>
#include <string>


class settime{
public:
    int ndate[11];
    int ndaysum[11];//�� ���� �� �� 
	int firstday[11];//1~12�� 1���� ���� 
	int tyear;	//���س⵵ 
	int temp1;
	int temp2;	
	
	void gettime();
	void Leapyear(int tyear);
	int totalday(int month,int date,int firstday[11]){return daysum;
	};
};
class timenow{
public:
    int year=tyear;
	int month;
	int day;
	int date;
		
};



