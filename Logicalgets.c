#include<stdio.h>

 

int main()

{

    int key;

    printf("################################LOGICAL GATES##########################");

    printf("\n1)AND gate\n");

    printf("2)OR gate\n");

    printf("3)NOT gate\n");

    printf("4)NOR gate\n");

    printf("#################################Exclisive logic gate####################\n");

    printf("4)EX-OR gate\n");

    printf("5)EX-NOR gate\n");

    printf("##############################################################################\n");

    printf("ENTER ANY KEY\n");

  printf("\n");

   scanf("%d",&key);

  switch (key)

{

  case 1:

    {

         printf("The Symbol of AND gate is given above.\nThis circuit perform AND operation .It Consist of 'N'number of input.\n The two input AND gate having input A & B is show in circuit diagram,\nit have only one output i.e. Y. ");

         printf("\n The basic operation of AND gates  is defind as when all the input is at logic 1 then output will be 1 other wise output will be 0.\n The logical equation of AND gate is Y=AB");    

          break;

    }

    case 2:

    {

         printf("The Symbol of OR gate is given above.\nThis circuit perform OR operation .It Consist of 'N'number of input.\n The two input OR gate having input A & B is show in circuit diagram,\nit have only one output i.e. Y. ");

        printf("\n The basic operation of OR gates  is defind as when all the input is at logic 0 then output will be 0 other wise output will be 1.\n The logical equation of OR gate is Y=A+B");    

         break;  

    }

    case 3: 

    {

        printf("The Symbol of NOT gate is given above.\nThis circuit perform NOT operation .It Consist of 'N'number of input.\n The one input NOT gate having input A is show in circuit diagram,\nit have only one output i.e. Y. ");

        printf("\n The basic operation of NOT gates  is defind as The input is 0 then output will be 1 And the input will 1 then output will be 0.\n The logical equation of NOT gate is Y=Abar");

        break; 

    }

    default :

    {

      printf("Invalid operation");

    }

}

}
