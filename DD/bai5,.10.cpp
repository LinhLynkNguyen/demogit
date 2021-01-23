#include<stdio.h>
#include<math.h>
int main() {
	int so,hang,donvi;
	printf("Enter: ");
	scanf("%d",&so);
	donvi=so%10;
	hang=so/10;
if(so==10){
	printf("muoi");
	return 0;}
if(hang==1)
		printf("muoi");
	else if(hang==2)
		printf("hai muoi");
	else if(hang==3)
		printf("ba muoi");
	else if(hang==4)
		printf("bon muoi");
	else if(hang==5)
		printf("nam muoi");
	else if(hang==6)
		printf("sau muoi");
	else if(hang==7)
		printf("bay muoi");
	else if(hang==8)
		printf("tam muoi");
	else if(hang==9)
		printf("chin muoi");
if(donvi==1)
		printf(" mot");
	else if(donvi==2)
		printf(" hai");
	else if(donvi==3)
		printf(" ba");
	else if(donvi==4)
		printf(" bon");
	else if(donvi==5)
		printf(" nam");
	else if(donvi==6)
		printf(" sau");
	else if(donvi==7)
		printf(" bay");
	else if(donvi==8)
		printf(" tam");
	else if(donvi==9)
		printf(" chin");
	else if(donvi==0)
		printf("");
	
	return 0;
}
