#include <stdio.h>
int main()
{
  int option,quantity;
  int Pizza=0,Biryani=0,Pasta=0,Coffee=0;
  int total=0;
  do
  {
      printf("\n----Welcome to emertxe cafe----\n");
      printf("1. Pizza =250\n");
      printf("2. Biryani =350\n");
      printf("3. Pasta =100\n");
      printf("4. Coffee =40\n");
      printf("0. Exit and Generate Bill\n");
      printf("Enter your choice:\n");
      scantf("%d",&option);

      switch(option)
      {
          case 1:
              printf("Enter Pizza quantity : ");
              scanf("%d",&quantity);
              Pizza=Pizza+quantity;
              total=total+(250*quantity);
              break;
          case 2:
              printf("Enter Biryani quantity : ");
              scanf("%d",&quantity);
              Biryani=Biryani+quantity;
              total=total+(350*quantity);
              break;
          case 3:
              printf("Enter Pasta quantity : ");
              scanf("%d",&quantity);
              Pasta=Pasta+quantity;
              total=total+(100*quantity);
              break;
          case 4:
              printf("Enter Coffee quantity : ");
              scanf("%d",&quantity);
              Coffee=Coffee+quantity;
              total=total+(40*quantity);
              break;
          case 0:
              printf("\n Generating your bill... \n ");
              break;
          default:
              printf("Invalid Choice\n");
      }
  }
    while(option !=0);
         printf("\n------Final Bill-----\n");
         printf("Pizza Ordered :%d\n",Pizza);
         printf("Biryani Ordered :%d\n",Pizza);
         printf("Pasta Ordered :%d\n",Pizza);
         printf("Coffee Ordered :%d\n",Pizza);
         printf("Total Bill :Rs.%d\n",total);
  return 0;
}
         


  
