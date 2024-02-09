#include<stdio.h>
#include<time.h>
int main (){
    printf("\n\t**************************^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*****************\n");
    printf("\n\t\t\t\tWELCOME TO HAPPY SHOPPING GROCERY STORE\n");
    printf("\n\t**************************<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>****************\n");
    time_t tm;
time(&tm);
printf("\n\t\t\t\tCurrent Date/Time = %s\n", ctime(&tm));
printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("\n\t\t\t\t\tToday per KG Price List\n");
printf("\n\tTomatoes:200\t\tOnion:350\t\tPotatoes:150\t\tGreen Peas:200\n");
printf("\n\t=====================================================================================\n");
printf("\n\t\t\tPlease Enter Your Desired Quantity\n");
float Tomatoes_quantity;
float onion_quantity;
float  potatoes_Quantity;
float greenpea_quantity;
printf("\n\t\t\tEnter Quantity Of Tomatoes:\t");
scanf("%f",&Tomatoes_quantity);
printf("\n\t\t\tEnter the quantity of Onions:\t");
scanf("%f",&onion_quantity);
printf("\n\t\t\tEnter the quantity of Potatoes:\t");
scanf("%f",&potatoes_Quantity);
printf("\n\t\t\tEnter the quantity of Green peas:\t");
scanf("%f",&greenpea_quantity);
printf("\n\t#####################################################################################\n");
printf("\n\t\t\t\t\tTottal Bill\n");
float price_of_tomatoes=Tomatoes_quantity*200;
float price_of_Onions=onion_quantity*350;
float price_of_potatoes=potatoes_Quantity*150;
float price_of_greenpees=greenpea_quantity*200;

printf("\n\t\tItem\t\t||\t\tQuantity\t\t||\t\tTottal Price\n");
printf("\n\t\tTomatoes\t||\t\t%.1fKG\t\t\t||\t\t%.1f",Tomatoes_quantity,price_of_tomatoes);
printf("\n\n\t\tOnions\t\t||\t\t%.1fKG\t\t\t||\t\t%.1f",onion_quantity,price_of_Onions);
printf("\n\n\t\tPotatoes\t||\t\t%.1fKG\t\t\t||\t\t%.1f",potatoes_Quantity,price_of_potatoes);
printf("\n\n\t\tGreenPees\t||\t\t%.1fKG\t\t\t||\t\t%.1f",greenpea_quantity,price_of_greenpees);
float total_amount=price_of_tomatoes+price_of_Onions+price_of_potatoes+price_of_greenpees;
printf("\n\n\t------------------------------------------------------------------------------------------\n");
printf("\n\t\tGrand Tottal\t\t==================================\t\t%.1f",total_amount);
float Recieve=5000;
printf("\n\n\t\tRecievd\t\t\t==================================\t\t%.1f",Recieve);
float remaining=Recieve-total_amount;
printf("\n\n\t\tRemaining\t\t==================================\t\t%.1f\n",remaining);
int notes5000=remaining/10000;
int notes1000=remaining/1000;
int notes500=remaining/10000;
int notes100=remaining/1000-3;
int notes50=remaining/10000;
int notes20=remaining/10000;
int notes10=remaining/10000;
int notes5=remaining/10000;
int notes2=remaining/10000;
int notes1=remaining/10000;
printf("\n\t\t\t\t\t5000 Notes\t=\t%d\n",notes5000);
printf("\n\t\t\t\t\t1000 Notes\t=\t%d\n",notes1000);
printf("\n\t\t\t\t\t500 Notes\t=\t%d\n",notes500);
printf("\n\t\t\t\t\t100 Notes\t=\t%d\n",notes100);
printf("\n\t\t\t\t\t50 Notes\t=\t%d\n",notes50);
printf("\n\t\t\t\t\t20 Notes\t=\t%d\n",notes20);
printf("\n\t\t\t\t\t10 Notes\t=\t%d\n",notes10);
printf("\n\t\t\t\t\t5 Notes\t\t=\t%d\n",notes5);
printf("\n\t\t\t\t\t2 Notes\t\t=\t%d\n",notes2);
printf("\n\t\t\t\t\t1Notes\t\t=\t%d\n",notes1);


}