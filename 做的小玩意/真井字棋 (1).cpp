

#include <stdio.h>
#include <stdlib.h>

//int qizi[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int qizi[3][3];
int wanj=0;
int w1,w2;
int jc=2;
int bj=0;
int ks;

//��ʼ��
void csh(){
	
	for(int i2=1;i2<=3;i2++)
	{
		for(int j2=1;j2<=3;j2++)
		{
			qizi[i2][j2]=0;
		}
	}
	
}

void qpbuju()
{
	printf("\n  �����̲��ְ�����     \n\n");
	printf(" (1,1)�� (1,2)��(1,3)     \n");
	printf("�������贈�����贈����    \n");
	printf(" (2,1)�� (2,2)��(2,3)     \n");
	printf("�������贈�����贈����    \n");
	printf(" (3,1)�� (3,2)��(3,3)     \n");
	printf("                      \n\n\n\n\n");
}





//�ж�
void pd(){
	for(int i1=1;i1<=3;i1++)
	{
		if(qizi[i1][1]==qizi[i1][2]&&qizi[i1][1]==qizi[i1][3]&&qizi[i1][1]==1)
		{
			printf("��Ϸ������1����Ӯ��\n");
			wanj=1;
		}
		else if(qizi[i1][1]==qizi[i1][2]&&qizi[i1][1]==qizi[i1][3]&&qizi[i1][1]==2)
		{
			printf("��Ϸ������2����Ӯ��\n");wanj=1;
			
		}
		
		else if(qizi[1][i1]==qizi[2][i1]&&qizi[1][i1]==qizi[3][i1]&&qizi[1][i1]==1)
		{
			printf("��Ϸ������1����Ӯ��\n");wanj=1;
			
		}
		else if(qizi[1][i1]==qizi[2][i1]&&qizi[1][i1]==qizi[3][i1]&&qizi[1][i1]==2)
		{
			printf("��Ϸ��������Ӯ��\n");wanj=1;
			
		}
		
		
		else if(qizi[1][1]==qizi[2][2]&&qizi[1][1]==qizi[3][3]&&qizi[1][1]==2)
		{
			printf("��Ϸ������2����һ�ʤ\n");wanj=1;
			
		}
		
		else if(qizi[1][1]==qizi[2][2]&&qizi[1][1]==qizi[3][3]&&qizi[1][1]==1)
		{
			printf("��Ϸ������1����Ӯ��\n");wanj=1;
			
		}
		
		
		
	}
	
}


void buju(){
	
	if(bj==1)
	{
	qpbuju();
	bj=0;
	}
	printf("--------��Ϸ����---------\n\n");
	
	
	for(int i=1;i<=3;i++)
	{
		
		for(int j=1;j<=3;j++)
		{
			if(j!=3){
				printf( "  %d   ��",qizi[i][j]);
			}
			else
			{
				printf( "  %d    ",qizi[i][j]);
			}
		}
		printf("\n�������贈�����贈����\n");
	}
	
	printf("  \n");
	
}



int main(){
	
	
	printf("-------------------------------\n");
    printf("         #������С��Ϸ#        \n");
	printf("--��Ϸ������6 6�ɲ鿴���ְ���--\n");
	printf("������������������������������\n");
	printf("--------|���س�����ʼ|--------\n");
	printf("������������������������������\n");
	printf(" \n");


		
	//scanf("%d",&buju);
	getchar();
	
    csh();
	
	
	while(1){
		jc++;
		
		if(wanj==0){
			
			
			if(jc%2==1)
			{
	
		    printf("\n��1����ң���������λ�ã�\n");
				
			}
			
			else
			{
	
				printf("\n��2����ң���������λ�ã�\n");	
			}
			
			scanf("%d %d",&w1,&w2);

			//***************************************
            if(3<w1||w1<1)
			{
			printf("ccfw");
			
			}
                 else if(3<w2||w1<2)
			{
			printf("ccfw");
			
			}

          ///***********************************************
			if(w1==6&&w2==6)
			{
			bj=1;
			
			}
			


			if(qizi[w1][w2]==0){
				
				if(jc%2==1)
				{
					system("cls");
					qizi[w1][w2]=1;
					buju();
					pd();
				}
				
				else 
				{
					
					system("cls");
					qizi[w1][w2]=2;
					buju();
					pd();
				}
			}
			
			
			else
			{
				printf("��λ���ѱ�ռ���ˣ����������룺\n");
				jc--;
			}

			
		}
		
	}
	
}







