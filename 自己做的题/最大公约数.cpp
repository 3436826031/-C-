#include <stdio.h>
main(){
	int a,b,c;
	int max=0;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1;i<=9;i++)
	{
		if(a%i==0&&b%i==0&&c%i==0)//������ͬ��һ������������
		{
			printf("��Լ����%d\n",i);
			
			if(i>max)//�ȴ�С��ѡ������
				
			{
				max=i;
			}
			
		}
		
	}
	
	printf("���Լ����%d",max);//������
	
}