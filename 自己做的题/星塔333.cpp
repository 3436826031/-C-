#include <stdio.h>
main(){
int hang;
int i;
int x;
int g;
scanf("%d",&hang);

for(i=0;i<hang;i++)
{
 g=i+1;
while(g<hang)
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
