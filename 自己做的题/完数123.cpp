	/*�����������г������������Լ���ĺͣ�ǡ�õ���������
�磺6=1+2+3�� 28��1+2+4+7+14
˼·�����Լ����Ȼ���ۼ���Ϳ��ǲ����������*/

#include <stdio.h>
main()
{



   int y1,shu;
   int a[100],b;
   int a1=0;
	scanf("%d",&shu);
	printf("%d=",shu);
	{
		
			for(int i=1;i<shu;i++)//��Լ����������
			{
				if(shu%i==0)
				{
				a[i]=i;
                b=a1+a[i];
                a1=b;  //�ۼӷ������
				printf("����Ϊ%d  \n",a[i]);
				}          
                 
			}

	
	if(a1==shu)//�ж��Ƿ����
	{
		printf("\n������\n");
	
	}
	else
	{
	printf("\n��������\n");
	
	}
		
		
		
		
		
		
	}

}