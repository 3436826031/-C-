#include<stdio.h>

int main()
{
	int yue;
	int ri;
	int js=0;
	printf("���������ڣ�");scanf("%d%d",&yue,&ri);	
	
	for(int i=1;i<=yue;i++)
	{
		if(i%2==0)
		{
			js=js+30;
		}
		
		else if(i%2==1)
		{
			js=js+31;
		}
		
		
	}
	printf("\n���ǽ����%d��\n",js+ri);      
	
}
