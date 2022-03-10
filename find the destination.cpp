#include<stdio.h>
#define KAM 50
#define BHAN 100
#define TUM 150
#define GND 200

 int main()
 {
 	char p_name[10],source[10]="Nagpur",dest[10];
 	int p,total_fare,f ;
 	printf("\n Enter Passenger name : ");
 	gets(p_name);
 	printf("\nEnter destination : ");
 	printf("\n kamptee %d",KAM);
 	printf("\n bhandara %d",BHAN);
 	printf("\n tumsar %d",TUM);
 	printf("\n gondia %d",GND);
 	
 	gets(dest);
 	printf("\n Enter no.of passenger : ");
 	scanf("%d",&p);
 	printf("\n Enter fare : ");
 	scanf("%d",&f);
 	total_fare=p*f;
 	printf("\n---------------------------------------------------------");
 	printf("\nname:%s",p_name);
 	printf("\nsource: %s\tdestination: %s",source,dest);
 	printf("\n----------------------------------------------------------");
 	printf("\n no.of passenger: %d",p);
 	
 	printf("\ntotal_fare:%d",total_fare);
 	printf("\n----------------------------------------------------------");
 	printf("\n on the way");
 	return 0;
 }
 	
