#include <stdio.h>
#include <stdlib.h>
float min(float Tableau[] , int n){
int i ;

float min = Tableau[0];
for(i = 1 ; i < n ; i++){
    if (min > Tableau[i]){
        min = Tableau[i];
    }
}
return min ;
}
float max(float Tableau[] , int n){
int i ;

float max = Tableau[0];
for(i = 1 ; i < n ; i++){
    if ( max < Tableau[i] ){
        max = Tableau[i];
    }
}
return max ;
}
int main()
{
    float T[13] , L[15] ;
    int i , x , y ;

        printf("veuillez enter les notes du classe n1 \n");

    for ( i=0 ; i < 13 ;i++ ) {
        printf("T[%d]",i);
         scanf("%f", &T[i]);
}
        printf("veuillez enter les notes du classe n2 \n");
     for(i=0 ; i < 15 ; i++ )  {
           printf("L[%d]",i);
        scanf("%f",&L[i]);
    }

    // classement du classe n 1
 printf("min de la note du classe n1  %f\n",min(T, 13));
printf("max de la note du classe n1  %f\n",max(T, 13));

// classement du classe n 2
 printf("min de la note du classe n2 %f\n",min(L, 15));
printf("max de la note du classe n2 %f\n",max(L, 15));

    x=0 ;
 for (i=0 ; i<13 ; i++){
        if (T[i] >= 10) {
            x=x+1 ;
        }
}

printf("la moyenne du classe n1 %d\n",x);


    y=0 ;
 for (i=0 ; i<15 ; i++){
        if (L[i] >= 10) {
            y=y+1 ;
        }
}

printf("la moyenne du classe n2 %d\n",y);

   return 0;
    }





