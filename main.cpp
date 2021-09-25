#include<bits/stdc++.h>
#include "time.h"
#include <ctime>
using namespace std;
 
class today{
public:
    int ndate[11];
	string NewyearDay;
	int tyear;	
}; 
string str_day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int month_day[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int main()
{

time_t temp;
struct tm* timeinfo;
 
time(&temp);
timeinfo = localtime(&temp);

1900 + timeinfo->tm_year;
1 + timeinfo->tm_mon;
timeinfo->tm_mday;
 
cout << "year : " << 1900 + timeinfo->tm_year << "\n";


 
 
 
return 0;
}
