#include<stdio.h>
#include<math.h>
  int main()
  {
  int a,can,b, chi;
  printf("nhap nam :");
  scanf("%d",&a);
  if (a<2000);{
  	can = a % 10;
    if (can==0)
        printf("Canh");
  else if(can==1)
		printf("Tan");
	else if(can==2)
		printf("Nham");
	else if(can==3)
		printf("Quy");
	else if(can==4)
		printf("Giap");
	else if(can==5)
		printf("At");
	else if(can==6)
		printf("Binh");
	else if(can==7)
		printf("Dinh");
	else if(can==8)
		printf("Mau");
	else if(can==9)
	    printf("Ky");
	b = a % 100;
	chi = b % 12;
	if (chi==0)
	    printf(" Ti");
	else if(chi==1)
		printf(" Suu");
	else if(chi==2)
		printf(" Dan");
	else if(chi==3)
		printf(" Mao");
	else if(chi==4)
		printf(" Thin");
	else if(chi==5)
		printf(" Ty");
	else if(chi==6)
		printf(" Ngo");
	else if(chi==7)
		printf(" Mui");
	else if(chi==8)
		printf(" Than");
	else if(chi==9)
	    printf(" Dau");	
	else if(chi==10)
	    printf(" Tuat");
	else if(chi==11)
	    printf(" Hoi");	    
	}
   return 0;
   
   if (a>=2000){
	  can =(a+100)%10;
	  if (can==0)
        printf("Canh");
    else if(can==1)
		printf("Tan");
	else if(can==2)
		printf("Nham");
    else if(can==3)
		printf("Quy");
	else if(can==4)
		printf("Giap");
	else if(can==5)
		printf("At");
	else if(can==6)
		printf("Binh");
	else if(can==7)
		printf("Dinh");
	else if(can==8)
		printf("Mau");
	else if(can==9)
	    printf("Ky");
	}
	
	if (a>=2000){
	b = (a+8);	
	chi= b%12 ;
	if (chi==0)
	    printf(" Ti");
	if(chi==1)
		printf(" Suu");
	if(chi==2)
		printf(" Dan");
	if(chi==3)
		printf(" Mao");
	if(chi==4)
		printf(" Thin");
	if(chi==5)
		printf(" Ty");
	if(chi==6)
		printf(" Ngo");
	if(chi==7)
		printf(" Mui");
	if(chi==8)
		printf(" Than");
	if(chi==9)
	    printf(" Dau");	
	if(chi==10)
	    printf(" Tuat");
	if(chi==11)
	    printf(" Hoi");	
		}
		return 0;
	    
	    
  
  
  }
  
