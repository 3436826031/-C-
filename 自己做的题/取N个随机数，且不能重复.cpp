//���ȡ10��������1-20�ڣ����Ҳ����ظ�������

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	srand(time(0));
	int a[10];
	int b=1;
	//����forѭ������һ��ȡֵ���ڶ��������ظ����������޸�
	for(int i=0;i<10;i++)
	{
		
		a[i]=rand()%10+10;
		//printf("\n-----%d------\n",a[i]);
		
		for(int j=0;j<i;j++)//�������Ƿ���ǰ����һ��
		{	
			while(a[i]==a[j])//���һ��������ȡֵ��֪����һ��
				
			{	
				a[i]=rand()%10+10;
				printf("cf  \n");
				j=0;
			}	
			
		}
		
		
	}
	
	for(int i1=0;i1<10;i1++)
	{
		
		printf("%d  ",a[i1]);
		
	}
	
	
}