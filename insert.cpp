#define classrepeat=16; //1�б�-16�� 

class plusclass{
public:
    int cmonth;
	int cday;
	int cdate;
	int count;
    
		
};

int classtable(int month,int day) //1�б�(16ȸ) �ݺ� �߰�
{
	if (month<9)//1�б� 
	{ 
	while(count)//3�� ���� ���� ���� 16�� �߰� 
	
	}
	else//2�б� 
	{
	}
 }  
 
 int nextweekdate(int month,int day,int ndate[11]) //�������� ������ �˻�
{
	if (day+7>ndate[month-1]){
		return month+1,(day+7)-ndate[month-1];
		
	}
	else 
	{
	return month,day+7;
	}
 } 
