

#include <stdio.h>


//int qizi[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int qizi[3][3];
int wanj=0;
  int w1,w2;



//��ʼ��
void csh(){

for(int i2=1;i2<=3;i2++)
{
  for(int j2=1;j2<+3;j2++)
  {
  qizi[i2][j2]=0;
  }
}

}



void pd(){
for(int i1=1;i1<=3;i1++)
{
    if(qizi[i1][1]==qizi[i1][2]&&qizi[i1][1]==qizi[i1][3]&&qizi[i1][1]==1)
	   {
	printf("��ɣ�1����Ӯ��");
	wanj=1;
	   }
	else if(qizi[i1][1]==qizi[i1][2]&&qizi[i1][1]==qizi[i1][3]&&qizi[i1][1]==2)
	{
	printf("��ɣ�2����Ӯ��");wanj=1;
	
	}

    else if(qizi[1][i1]==qizi[2][i1]&&qizi[3][i1]==qizi[3][i1]&&qizi[1][i1]==1)
	   {
printf("��ɣ�1����Ӯ��");wanj=1;
	   
	   }
	else if(qizi[i1][1]== qizi[i1][2] &&qizi[i1][1]==qizi[i1][3] &&qizi[i1][1]==2)
	{
	printf("22222");wanj=1;
	
	}


	else if(qizi[1][1]==qizi[2][2]&&qizi[1][1]==qizi[3][3]&&qizi[1][1]==2)
	{
	printf("n11");wanj=1;
	
	}

		else if(qizi[1][1]==qizi[2][2]&&qizi[1][1]==qizi[3][3]&&qizi[1][1]==1)
	{
	printf("��ɣ�1����Ӯ��");wanj=1;
	
	}





}

}


void buju(){
for(int i=1;i<=3;i++)
{
  for(int j=1;j<=3;j++)
  {
  printf("%d ",qizi[i][j]);
  }
printf("\n");
}

}





int main(){


	printf("---------------\n");
    printf("   #������#    \n");
	printf("---------------\n");
	printf("---���س���ʼ--\n");
	getchar();	getchar();
  int jc=1;

csh();


  while(1){


	  if(wanj==0){
	if(jc%2==1)
	{
	
	printf("\n������1������λ�ã�\n");

	}

	if(jc%2==0)
	{
	
	printf("\n������2������λ�ã�\n");

	}
  

   scanf("%d %d",&w1,&w2);


    jc++;
	if(qizi[w1][w2]==0){
	if(jc%2==1)
	{
	
    // qizi[w1][w2]='1';
	qizi[w1][w2]=1;
     buju();
	 pd();
	}

	else
	{

		
	 // qizi[w1][w2]='2';

	qizi[w1][w2]=2;
      buju();
	  pd();
	}
	}
else
{
printf("��ռ����");

}


  }

  }

}







