#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int gu,num,times,i,ch,flag=0;
	
    //times=3;
	//��Ϸ��½����
	
	while(1)
	{
		printf("|-----------��[��������Ϸ]��-----------|\n");
		printf("|����������������      ����������������|\n");
		printf("| <1> ��������Ϸ        <2> ���˳���Ϸ |\n");
		printf("|����������������      ����������������|\n");
		printf("|--------------------------------------|\n");
		printf("\n��ѡ��:");
		scanf("%d",&ch);
		if(ch==1){break;}
		if(ch==2){printf("---������Ϸ���˳����´μ�����---!!\n");flag=1;break;}
		else{
		
		printf("�����������������\n");
	    getchar();getchar();
		system("cls");
		}
	}
	
	
	system("cls");
	//��Ϸ����
	while(1)
	{
		if(flag==1) {printf("tuichu");break;}
		printf("------------------------\n");
		printf("1-��-���ѣ����λ��ᣩ|  \n2-��-�еȣ����λ��ᣩ|  \n3-��-�򵥣���λ��ᣩ|\n");
		printf("------------------------\n");
		printf("\n��ѡ���Ѷ�:");
		scanf("%d",&ch);
		if(ch==1){times=2;break;}
		if(ch==2){times=3;break;}
		if(ch==3){times=5;break;}
		else{	
		printf("\n�����������������\n");
        getchar();getchar();
		system("cls");
		}	
	}
	
	
    while(1)
	{
srand(time(0));
num=rand()%10+1;
if(flag==1) {printf("���˳�ϵͳ");break;}
			

		
		for(i=1;i<=times;i++)
		{   
			if(flag==1) {printf(" ");break;}
			
if(i==times)
		{
			printf("\n���ѣ��㻹�����һ�ξͻ�\n");
		}
                   			
			printf("������һ��1--10֮�����:");
			scanf("%d",&gu);
				if(gu==666)
			{
				printf("��%d\n",num);	break;
			}
			
			if(gu==num)
			{
			system("cls");	printf("----------------\n��ϲ�㣬�¶��ˣ�����ȷ�ʣ�%d/%d\n---------------------\n",i,times);getchar();getchar();	break;
			}
			
			if(gu<num)
			{
				printf("���������С�ˣ�������\n--------------------------------\nʣ�������<%d>\n\n",times-i);
			}      
			
			if(gu>num)
			{
				printf("��������´��ˣ�������\n--------------------------------\nʣ�������<%d>\n\n",times-i);
			}
		}
		
		if(i==times+1){printf("�����ˣ��ѵ��������ޣ���\n");}
		
		
		
		printf("----------------------------------------\n");
		printf("1--����\n2--�˳�\n");
		printf("----------------------------------------\n");
		printf("\n��ѡ��:");
		scanf("%d",&ch);
		if(ch==1){system("cls");
		
		
		while(1)
		{
			if(flag==1) {printf("tuichu");break;}
			printf("-----------------------------------------------------------------\n");
			printf("1--�߼������Բ����Σ�  2--�м������Բ����Σ�  3--���������Բ���Σ�\n");
			printf("-----------------------------------------------------------------\n");
			printf("\n��ѡ���Ѷ�:");
			scanf("%d",&ch);
			if(ch==1){times=2;break;}
			if(ch==2){times=3;break;}
			if(ch==3){times=5;break;}
		}
		
		
		
		continue;}
		if(ch==2){printf("��Ϸ�Ѿ��˳����´μ�!!\n");break;}
		
	}
	
	getchar();getchar();	
	
}
