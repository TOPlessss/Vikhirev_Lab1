#include <stdio.h>
#include <stdlib.h>


void Cel(double C)
{
  if (C<-273.15)  /*Condition verification*/
  {
  	printf("Incorrect temperature");
  }
  else{
	double F = C * 1.8 + 32 ; /*Convert  temperature*/
	double K = C + 273.15 ;   /*Convert  temperature*/
		printf("%.2f C\n",C);
		printf("%.2f F\n",F);
		printf("%.2f K\n",K);
      }
}
void Kel(double K)
{
	if(K<0) /*Condition verification*/
  {
	  printf("Incorrect temperature");
  }
	else
	    {
	double C = K - 273.15;   /*Convert  temperature*/
	double F = C * 1.8 + 32; /*Convert  temperature*/
		printf("%.2f K\n",K);
		printf("%.2f C\n",C);
		printf("%.2f F\n",F);
      }
}
void Far(double F)
{
	if (F<-459.7) /*Condition verification*/
	{
		printf("Incorrect temperature");
	}
	else
		 {
	double C =(F - 32) / 1.8; /*Convert  temperature*/
	double K = C + 273.15;    /*Convert  temperature*/
		printf("%.2f F\n",F);
		printf("%.2f C\n",C);
		printf("%.2f K\n",K);
     }
}
int main(int argc, char *argv[]) /*Input information*/
{
	if (argc == 3){
		if (*argv[2]=='C')
		 {
		Cel(atof(argv[1]));
	   } else if (*argv[2] == 'F') {
		Far(atof(argv[1]));
		 } else if (*argv[2] == 'K') {
		Kel(atof(argv[1]));
	}
} else
 {
		Cel(atof(argv[1]));
		Far(atof(argv[1]));
		Kel(atof(argv[1]));
	}
	return(0);
}
