



//���Ρ�laj���룬֮ǰ��д�õ������ǣ�����������
//���Ƴ��ĵ����ǣ���������


#include <stdio.h>
void fan();

void zheng();
int kg=0;
int hang;
int shu=0;
main(){
	
	scanf("%d",&hang);
	
	if(kg==0)
	{
		zheng();
		kg=1;
	}
	if(kg==1){
		fan();
		
	}
}










void fan()
{
	
	for(int i=hang;0<i;i--)
	{
		for(int k=hang;i<k;k--)
		{
			printf(" ");
		}
		
		for(int ge=0;ge<2*i-1;ge++)
		{
			printf("*");
		}		
		
		printf("\n");
	}
	
	
}











void zheng(){
	
	
	
	int i;
	int x;
	int g;
	
	for(i=0;i<hang;i++)
	{
		g=i+1;
		while(g<hang+1)
		{
			g++;
			printf(" ");//�ո�������emmm
		}
		
		//ƽ�е�for
		for(x=0;x<2*i-1;x++)
		{    
			printf("*"); 
		}
		printf("\n");
	}
	
	
}