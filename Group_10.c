#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[20];

void main()
{
    printf("Enter your surname : ");
    scanf("%s",&name);
    getchar();
    int act1,act2,act3,act4;
    act1=act2=act3=act4=0;

    end:
    system("cls");
    int loop = 0;
    while(loop==0){
    int answer,enter;
    char country[57][50] = {"jordan","nertherlands","greece","thailand","china","germany","egypt","australia","denmark","bangladesh","qatar","ireland","finland","indonesia","afghanistan",
						  		  "jamaica","malaysia","united kingdom","portugal","spain","philippines","mexico","russia","kenya","bahamas","india","canada","norway","france","czech republic","africa",
						  		  "kosovo","north korea","saudi arabia","italy","sri lanka","chile","south korea","singapore","bulgaria","sweden","fiji","taiwan","uzbekistan","georgia","iran",
            			  		  "albania","japan","libya","tunisia","mongolia","austria","laos","poland","united states of america","new zealand","crotia"};
    char capital[57][50] = {"amman","amsterdam","athens","bangkok","beijing","berlin","cairo","canberra","copenhagen","dhaka","doha","dublin","helsinki","jakarta","kabul","kingston","kuala lumpur",
						 		 "london","lisbon","madrid","manila","mexico city","moscow","nairobi","nassau","new delhi","ottawa","oslo","paris","prague","pretoria","pristina","pyonyang",
            			 		 "riyadh","rome","colombo","santiago","seoul","singapore","sofia","stockholm","suva","taipei","tashkent","tbilisi","tehran","tirana","tokyo","tripoli","tunis",
            			 		 "ulaanbaatar","vienna","vientiane","warsaw","washington d.c","wellington","zagreb"};
    printf("*************************************************\n");
	printf("*\t\t\t\t\t\t*\n");
	printf("*  Welcome to CCF (Country and Capital Finder)  *\n");
	printf("*\t\t\t\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t Selection : \t\t\t\t*\n");
	printf("*\t\t 1. Capital Finder \t\t*\n");
	printf("*\t\t 2. Country Finder \t\t*\n");
	printf("*\t\t 3. Facts \t\t\t*\n");
	printf("*\t\t 4. Quiz \t\t\t*\n");
	printf("*\t\t 5. Exit \t\t\t*\n");
	printf("*************************************************\n\n");
	printf("Input : ");
    scanf("%d",&enter);
    getchar();
        if(enter == 1)
        {
            system("cls");
            do{
            char input[50];

            /*printf("LIST OF COUNTRIES\n--------------------------\n");
            for(int z=0;z<sizeof(country)/sizeof(country[0]);z++)
            {
                printf("%d : %s\n",z+1,country[z]);
            }*/

            printf("*=========================================    MENU FOR COUNTRIES    ============================================*");
            printf("\n*  1.Australia                    2.Afghanistan         3.Africa           4.Albania             5.Austria      *   ");
            printf("\n*  6.Bangladesh                   7.Bahamas             8.Bulgaria         9.China              10.Canada       *   ");
            printf("\n* 11.Czech Republic              12.Chile              13.Crotia          14.Denmark            15.Egypt        *   ");
            printf("\n* 16.Finland                     17.France             18.Fiji            19.Greece             20.Germany      *   ");
            printf("\n* 21.Georgia                     22.India              23.Italy           24.Iran               25.Jordan       *   ");
            printf("\n* 26.Jamaica                     27.Japan              28.Kosovo          29.Libya              30.Laos         *   ");
            printf("\n* 31.Mexico                      32.Malaysia           33.Mongolia        34.Nertherlands       35.Norway       *   ");
            printf("\n* 36.North Korea                 37.New zealand        38.Portugal        39.Philippines        40.Poland       *   ");
            printf("\n* 41.Qatar                       42.Russia             43.Spain           44.Sri Lanka          45.Sweden       *   ");
            printf("\n* 46.Saudi Arabia                47.South Korea        48.Singapore       49.Thailand           50.Thaiwan      *   ");
            printf("\n* 51.United States of America    52.United Kingdom     53.Uzbekistan      54.Tunisia            55.Kenya        *   ");
            printf("\n* 56.Ireland                     57.Indonesia                                                                   *");
            printf("\n*===============================================================================================================*\n");

            printf("\nEnter country name : ");
            gets(input);
            strlwr(input);

            for(int i=0;i<57;i++)
            {
                if(strcmp(input,country[i]) == 0)
                {
                    system("cls");
                    capitals(input,capital[i]);
                    act1=1;
                    break;
                }
                else if(strcmp(input,"end") == 0)
                {
                    goto end;
                }
                else if(i==56)
                {
                    system("cls");
                    printf("Input cannot be identified as name of country,%s\n",name);

                }
                else if(strcmp(input,"") == 0)
                {
                    system("cls");
                    printf("Enter something,%s :)\n",name);
                    break;
                }
            }
            }while(Continue()==1);
        }
        else if(enter == 2)
        {
            system("cls");

            do{
            char input[50];
            /*printf("LIST OF CAPITALS\n--------------------------\n");
            for(int z=0;z<sizeof(capital)/sizeof(capital[0]);z++)
            {
                printf("%d : %s\n",z+1,capital[z]);
            }*/

            printf("*=========================================    MENU FOR CAPITAL    ===============================================*");
            printf("\n*  1.Amman             2.Amsterdam          3.Athens                4.Bangkok         5.Beijing                  *   ");
            printf("\n*  6.Berlin            7.Cairo              8.Canberra              9.Copenhagen        10.Washington d.c        *   ");
            printf("\n* 11.Dhaka            12.Doha              13.Dublin               14.Helsinki          15.Jakarta               *   ");
            printf("\n* 16.Kabul            17.Kingston          18.Kuala Lumpur         19.London            20.Lisbon                *   ");
            printf("\n* 21.Madrid           22.Manila            23.Mexico City          24.Moscow            25.Jordan                *   ");
            printf("\n* 26.Nassau           27.New Delhi         28.Ottawa               29.Oslo              30.Paris                 *   ");
            printf("\n* 31.Prague           32.Pretoria          33.Pristina             34.Pyongyang         35.Riyadh                *   ");
            printf("\n* 36.Rome             37.Colombo           38.Santiago             39.Seoul             40.Singapore             *   ");
            printf("\n* 41.Sofia            42.Stockholm         43.Suva                 44.Taipei            45.Tashkent              *   ");
            printf("\n* 46.Tbilisi          47.Tehran            48.Tirana               49.Tokyo             50.Tripoli               *   ");
            printf("\n* 51.Tunis            52.Ulaanbaatar       53.Vienna               54.Vientiane         55.Warsaw                *   ");
            printf("\n* 56.Wellington       57.Zagreb                                                                                  * ");
            printf("\n*================================================================================================================*\n");

            printf("\nEnter capital name : ");
            gets(input);
            strlwr(input);
            for(int i=0;i<57;i++)
            {
                if(strcmp(input,capital[i]) == 0)
                {
                    system("cls");
                    countries(input,country[i]);
                    act2=1;
                    break;
                }
                else if(strcmp(input,"end") == 0)
                {
                    goto end;
                }
                else if(i==56)
                {
                    system("cls");
                    printf("Input cannot be identified as name of capital,%s\n",name);
                }
                else if(strcmp(input,"") == 0)
                {
                    system("cls");
                    printf("Enter something,%s :)\n",name);
                    break;
                }
            }
            }while(Continue()==1);
        }
        else if(enter == 3)
        {
            system("cls");
            int choice,option ;

            for(int i=1;i!=99999;i++){

            printf(">> TOP 10 COUNTRY RANKING <<");
            printf("\nList below shows each categories of top 10 ranking. ");
            printf("\nChoose one option from the list,%s ",name);
            printf("\nPlease enter a number from the menu to view the ranking.");

            printf("\n \n1. Richest Country \n2. Best Country To Live In");
            printf("\n3. Most Peaceful Country \n4. Country with Highest Population");
            printf("\n5. Most Educated Country \n6. Most Visited Country");
            printf("\n7. Most Corrupt Country  \n8. Country with Fastest Internet Speed");
            printf("\n9. Country by Highest Crime Index \n10. Most Beautiful Country");

            printf("\n \nEnter an answer here: ");
            scanf("%d", &choice);

            system ("cls");

            printf("Top 10 ");
            switch (choice)
             {


            case 1 :
            printf("Richest Country \n");
            printf("\n1. Qatar  \n2. Macao");
            printf("\n3. Luxembourg \n4. Singapore ");
            printf("\n5. Brunei Darussalam \n6. Ireland");
            printf("\n7. Norway \n8. United Arab Emirates");
            printf("\n9. Kuwait \n10. Switzerland");
            printf("\n \nSource: International Monetary Fund (2020)");
            act3=1;
            break;

            case 2 :
            printf("Best Country To Live In\n");
            printf("\n1. Norway  \n2. Switzerland");
            printf("\n3. Australia \n4. Ireland");
            printf("\n5. Germany \n6. Iceland");
            printf("\n7. Sweden \n8. Hong Kong");
            printf("\n9. Singapore \n10. The Netherlands");
            printf("\n \nSource: United Nation's Human Development Report (2020)");
            act3=1;
            break;

            case 3 :
            printf("Most Peaceful Country\n");
            printf("\n1. Iceland \n2. New Zealand");
            printf("\n3. Portugal\n4. Austria");
            printf("\n5. Denmark \n6. Canada");
            printf("\n7. Singapore \n8. Czech Republic");
            printf("\n9. Japan \n10. Switzerland");
            printf("\n \nSource: Institute for Economics and Peace (2020)");
            act3=1;
            break;

            case 4 :
            printf("Country with Highest Population\n");
            printf("\n1. China \n2. India");
            printf("\n3. United States \n4. Indonesia");
            printf("\n5. Pakistan \n6. Brazil");
            printf("\n7. Nigeria \n8. Bangladesh");
            printf("\n9. Russia \n10. Mexico");
            printf("\n \nSource: United Nations Population Division (2020)");
            act3=1;
            break;

            case 5 :
            printf("Most Educated Country\n");
            printf("\n1. Canada \n2. Japan");
            printf("\n3. Israel \n4. Korea");
            printf("\n5. United Kingdom \n6. United States");
            printf("\n7. Australia \n8. Finland");
            printf("\n9. Norway \n10. Luxembourg");
            printf("\n \nSource: Organisation for Economic Co-operation and Development (2020)");
            act3=1;
            break;

            case 6 :
            printf("Most Visited Country\n");
            printf("\n1. France \n2. Spain");
            printf("\n3. United States \n4. China");
            printf("\n5. Italy \n6. Turkey");
            printf("\n7. Mexico\n8. Germany");
            printf("\n9. Thailand \n10. United Kingdom");
            printf("\n \nSource: World Tourism Organization (2020)");
            act3=1;
            break;

            case 7 :
            printf("Most Corrupt Country\n");
            printf("\n1. Colombia \n2. Mexico");
            printf("\n3. Ghana \n4. Myanmar");
            printf("\n5. Guatemala \n6. Saudi Arabia");
            printf("\n7. Brazil \n8. Kenya");
            printf("\n9. Bolivia \n10. Russia");
            printf("\n \nSource: Corruption Perception Index (2020)");
            act3=1;
            break;

            case 8 :
            printf("Country with Fastest Internet Speed\n");
            printf("\n1. Singapore \n2. Hong Kong");
            printf("\n3. Romania \n4. Switzerland");
            printf("\n5. Thailand \n6. France");
            printf("\n7. Denmark \n8. Monaco");
            printf("\n9. Hungary \n10. United States");
            printf("\n \nSource: World Population Review & Speedtest Global Index (2020)");
            act3=1;
            break;

            case 9 :
            printf("Country by Highest Crime Index\n");
            printf("\n1. Venezuela \n2. Papua New Guinea");
            printf("\n3. South Africa \n4. Afghanistan ");
            printf("\n5. Honduras \n6. Trinidad And Tobago");
            printf("\n7. Brazil \n8. Guyana");
            printf("\n9. El Salvador \n10. Syria");
            printf("\n \nSource: Crime Index For Country (2020)");
            act3=1;
            break;

            case 10 :
            printf("Most Beautiful Country\n");
            printf("\n1. Scotland \n2. Canada");
            printf("\n3. New Zealand \n4. Italy");
            printf("\n5. South Africa \n6. Indonesia");
            printf("\n7. England \n8. Iceland");
            printf("\n9. United States \n10. Wales");
            printf("\n \nSource: Rough Guides (2020)");
            act3=1;
            break;

            default : printf("Please enter in between 1 to 10,%s",name);



         }
         printf("\n\nPress 1 to go back to TOP 10 menu or press any number to return: ");
         scanf("%d",&option);

          if (option==1){

            system ("cls");
          }

          else
          {
              system("cls");
              break;
          }


        }
        }
        else if(enter ==4)
        {
            int countq,countr;
            int r,i;
            int pa;int nq[6];int w;
            char choice;
            char playername[20];
            system("cls");

            mainhome:
            system("cls");
            puts("\n\t\t WELCOME TO I.Q. TEST PROGRAM\n\n") ;
            puts("\n\t\t-------------------------------");
            puts("\n\t\t Enter 'S' to start game       ");
            puts("\n\t\t Enter 'H' for help            ");
            puts("\n\t\t Enter 'Q' to quit             ");
            printf("\n\t\t-------------------------------\n\n\t\t  ");
            choice=toupper(getch());

            if (choice=='Q')
            {
                goto end;
            }
            else if (choice=='H')
            {
                help();
                getch();
                goto mainhome;
            }
            else if(choice=='S'){
            home:
            system("cls");
            countq=countr=0;
            i=1;
            start:
            r=rand()%10+1;
            nq[i]=r;
            for (w=0;w<i;w++)
            if (nq[w]==r) goto start;

                switch(r)
                {
                    case 1:
                    printf("\n\n\n Which of the following below is one of the Richest Country?");
                    printf("\n\n A.Switzerland\tB.Germany\tC.Malaysia\tD.Australia\n\n");
                    countq++;
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else
                    {
                        printf("\n\nWRONG,%s!!!The answer is A.Switzerland",name);
                        break;
                    }

                    case 2:
                    printf("\n\n\n Which of the following is capital of Taiwan?");
                    printf("\n\n A.Switzerland\tB.Taiwei\tC.Cairo\tD.Berlin\n\n");
                    countq++;
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else

                        printf("\n\nWRONG,%s!!!The answer is B.Taiwei",name);
                        break;

                    case 3:
                    printf("\n\n\n Which of the following is best country to live in?");
                    printf("\n\n A.Malaysia\tB.Taiwei\tC.Iceland\tD.Finland\n\n");
                    countq++;
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else
                    {
                        printf("\n\nWRONG,%s!!!The answer is C.Iceland",name);
                        break;
                    }

                    case 4:
                    printf("\n\n\n Which of the following you think most educated country?");
                    printf("\n\n A.Canada\tB.Taiwan\tC.Iceland\tD.Brazil\n\n");
                    countq++;
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else
                    {
                        printf("\n\nWRONG,%s!!!The answer is A.Canada",name);
                        break;
                    }

                    case 5:
                    printf("\n\n\n Which of the following is listed under Highest Crime Index?");
                    printf("\n\n A.Mexico\tB.India\tC.China\tD.Afghanistan\n\n");
                    countq++;
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else
                    {
                        printf("\n\nWRONG,%s!!!The answer is D.Afghanistan",name);
                        break;
                    }

                    case 6:
                    printf("\n\n\n Which of the following below you think most visited country?");
                    printf("\n\n A.France\tB.Singapore\tC.Iceland\tD.Brazil\n\n");
                    countq++;
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else
                    {
                        printf("\n\nWRONG,%s!!!The answer is A.France",name);
                        break;
                    }

                    case 7:
                    printf("\n\n\n Which of the following below is the country with highest population?");
                    printf("\n\n A.France\tB.India\tC.Finland\tD.United States\n\n");
                    countq++;
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else
                    {
                        printf("\n\nWRONG,%s!!!The answer is B.India",name);
                        break;
                    }

                    case 8:
                    printf("\n\n\n Which of the following below is the most beautiful country?");
                    printf("\n\n A.China\tB.Scotland\tC.Taiwan\tD.Singapore\n\n");
                    countq++;
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else
                    {
                        printf("\n\nWRONG,%s!!!The answer is B.Scotland",name);
                        break;
                    }

                    case 9:
                    printf("\n\n\n What is the capital of Iran?");
                    printf("\n\n A.Poland\tB.Athens\tC.Tehran\tD.Lisbon\n\n");
                    countq++;
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else
                    {
                        printf("\n\nWRONG,%s!!!The answer is C.Tehran",name);
                        break;
                    }

                    case 10:
                    printf("\n\n\n What is the country of Oslo?");
                    printf("\n\n A.Dublin\tB.Madrid\tC.Vienna\tD.Norway\n\n");
                    countq++;
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCORRECT,%s!!!",name); countr++;
                        break;
                    }
                    else
                    {
                        printf("\n\nWRONG,%s!!!The answer is D.Norway",name);
                        break;
                    }
                }
                i++;
                if (i<=5) goto start;
                act4=1;
                puts("\n\nNEXT PLAY?(Y/N)");
                if (toupper(getch())=='Y')
                goto home;
                else
                {
                    goto mainhome;
                }
            }
            else
            {
                printf("\n\n\t\t  Enter the right key,%s\n\n\t\t  ",name);
                Sleep(700);
                goto mainhome;
            }
        }
        else if(enter == 5)
        {
            system("cls");
            printf("What You Learned Today,%s\n",name);
            if(act1==1)
            {
                printf("-Get to know capital of country\n");

            }
            if(act2==1)
            {
                printf("-Get to know country of capital\n");

            }
            if(act3==1)
            {
                printf("-Get to know top 10 ranking according to category\n");

            }
            if(act4==1)
            {
                printf("-General knowledge by doing quiz\n");

            }
            if((act1==0)&&(act2==0)&&(act3==0)&&(act4==0))
            {
                printf("-Nothing :(\n");

            }
            printf("\nThank You For Using Our Program,%s :) Much Appreciated\n",name);
            system("pause");
            return 0;
        }
    }
}

int Continue()
{
    int z;
    printf("\n\nDo you want to continue?\nPress 1 - Yes\nPress 2 - No\nChoice:");
    scanf("%d",&z);
    getchar();
    system("cls");//clear screen
    return z;
}

void capitals(char *input,char *capital)
{
    printf("CAPITAL OF %s IS %s\n",strupr(input),strupr(capital));
}

void countries(char *input,char *country)
{
    printf("COUNTRY OF CAPITAL %s IS %s\n",strupr(input),strupr(country));
}

void help()
{
	system ("cls");
	printf("\n\n\n\tThe QUIZ is very easy to answer. You will be asked from what");
	printf("\n\n\twe have displayed before to check your understanding level!!!");
	printf("\n\n\tknowledge questions and the right answer is to be chosen among");
	printf("\n\n\tthe options are provided. Your score will be calculated at the");
	printf("\n\n\tend. Remember that the more quicker you give the answer the more");
	printf("\n\n\tscore you will secure. Your score will be calculated");
	printf("\n\n\tat the end and displayed. If you secure highest score, your score");
	printf("\n\n\twill be recorded. So BEST OF LUCK.");
}


