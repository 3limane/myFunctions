#include <stdio.h>
#include "myFunction.h"

int main()
{
     char ch[70];
     puts("Donner votre mot ");
     scanf("%s",ch);
     printf("Longueur de %s : %d\n",ch,myStrlen(ch));

     char ch1[50],ch2[50];
     puts("Donner le mot a copier");
     scanf("%s",ch2);
     myStrcpy(ch1 ,ch2);
     printf("Copie du mot dans la second chaine:%s\n",ch1);

     char ch3[50];
     puts("Donner votre mot en miniscule");
     scanf("%s",ch3);
     myStrupr(ch3);
     printf("Le majuscule est : %s\n",ch3);


    char ch4[50];
     puts("Donner votre mot en majuscule");
     scanf("%s",ch4);
     myStrlwr(ch4);
     printf("Le miniscule est : %s\n",ch4);

     char ch5[40];
     char X;
     puts("Donner un mot");
     scanf("%s",ch5);
     puts("Donner le caractere a chercher");
     scanf(" %c",&X);
     int result=myStrchr(ch5,X);
     if (result == 1)
     printf("'%c' est contenu dans '%s'\n",X, ch5);
     else
     printf("'%c' n'est pas contenu dans '%s'\n",X, ch5);

     char ch6[50],ch7[30];
     puts("Donner le premier mot");
     scanf("%s",ch6);
      puts("Donner le mot a chercher  ");
     scanf("%s",ch7);
     if (myStrstr(ch6, ch7) == 1)
    printf("'%s' est dans '%s'\n", ch7, ch6);
    else
    printf("'%s' n'est pas dans '%s'\n", ch7, ch6);


    char ch8[50],ch9[50],ch10[50];
     puts("Donner le premier mot");
     scanf("%s",ch8);
      puts("Donner le deuxieme mot");
     scanf("%s",ch9);
      puts("Donner le  troisieme mot");
     scanf("%s",ch10);
    printf("Comparaison de '%s' et '%s' = %d\n", ch8, ch9, myStrcmp(ch8, ch9));
    printf("Comparaison de '%s' et '%s' = %d\n", ch8, ch10, myStrcmp(ch8, ch10));
    printf("Comparaison de '%s' et '%s' = %d\n", ch9, ch10, myStrcmp(ch9, ch10));

return 0;

}
