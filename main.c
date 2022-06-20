#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("_____________________________\n");

    printf("     Welcome\n");
    printf("       To The\n");
    printf("          Quiz\n");

    printf("_____________________________\n\n");


    printf("   Here are some tips you might wanna know before playing\n");
    printf("-------------------------------------------------------------\n\n");

    printf(">These are two rounds in this Quiz\n ");
    printf(">First round -> WARMUP ROUND \n");
    printf(">Second round -> CHALLANGE ROUND \n");
    printf(">In Warmup round you will be asked a total 5 Questions. If you give 3 correct answer out of 5 you will be enter in challange round\n ");
    printf(">You will be given a four option you will choose correct one option\n");
    printf("\n");



    char start;
    printf(">To start the quiz Enter 's' \n");
    printf(">Press any key to quit \n");
    scanf("%c",&start);




    if(start == 's')
    {


    char ans1,ans2,ans3,ans4,ans5;

    printf("1) First prime minister of india : \n");
    printf("options\n");
    printf("a) Chaudhary Charan Singh\n");
    printf("b) Rajendra Prasad\n");
    printf("c) Jawaharlal Nehru\n");
    printf("d) Indra Gandhi\n");
    printf("write a option  : ");

    fflush(stdin);
    scanf("%c",&ans1);

    if(ans1 == 'c')
    {
        printf("Correct\n\n");

    }
    else
    {
        printf("incorrect\n\n");
    }

     printf("2) First President of india : \n");
    printf("options\n");
    printf("a) Vallabhbhai Patel\n");
    printf("b) Rajendra Prasad\n");
    printf("c) Jawaharlal Nehru\n");
    printf("d) Sarvepalli Radhakrishnan\n");
    printf("write a option  : ");

    fflush(stdin);
    scanf("%c",&ans2);

    if(ans2 == 'b')
    {
        printf("Correct\n\n");

    }
    else
    {
        printf("incorrect\n\n");
    }


    printf("3) First Home Minister  of india : \n");
    printf("options\n");
    printf("a) Chaudhary Charan Singh\n");
    printf("b) Rajendra Prasad\n");
    printf("c) Jawaharlal Nehru\n");
    printf("d) Vallabhbhai Patel\n");
    printf("write a option  : ");

    fflush(stdin);
    scanf("%c",&ans3);

    if(ans3 == 'd')
    {
        printf("Correct\n\n");

    }
    else
    {
        printf("incorrect\n\n");
    }

    printf("4) National game of india : \n");
    printf("options\n");
    printf("a) Cricket\n");
    printf("b) Hockey\n");
    printf("c) Tennis\n");
    printf("d) Kabbadi\n");
    printf("write a option  : ");

    fflush(stdin);
    scanf("%c",&ans4);

    if(ans4 == 'b')
    {
        printf("Correct\n\n");

    }
    else
    {
        printf("incorrect\n\n");
    }

    printf("5) National animal of india : \n");
    printf("options\n");
    printf("a) Tiger\n");
    printf("b) Lion\n");
    printf("c) Leopard\n");
    printf("d) Cow\n");
    printf("write a option  : ");

    fflush(stdin);
    scanf("%c",&ans5);

    if(ans5 == 'a')
    {
        printf("Correct\n\n");

    }
    else
    {
        printf("incorrect\n\n");
    }
       if((ans1 == 'c' && ans2 == 'b' && ans3 == 'd') || (ans1 == 'c' && ans3 == 'd' && ans4 == 'b') ||  (ans1 == 'c' && ans4 == 'b' && ans5 == 'a') || (ans2 == 'b' && ans3 == 'd' && ans4 == 'b') || (ans2 == 'b' && ans4 == 'b' && ans5 == 'a') ||  (ans3 == 'd' && ans4 == 'b' && ans5 == 'a' ) || (ans1 == 'c' && ans2 == 'b' && ans4 == 'b' ) || (ans1 == 'c' && ans2 == 'b' && ans5 == 'a' ) ||  (ans1 == 'c' && ans3 == 'd' && ans5 == 'a')  )
     {

       char ans6,ans7,ans8;
       printf("Study of earthquake is  \n");
       printf("option\n");
       printf("a) seismology           b) cosmology\n");
       printf("c) orology              d) etimology\n");

       fflush(stdin);
       scanf("%c",&ans6);

       if(ans6 == 'a')
       {
           printf("correct\n\n");
       }
       else
       {
           printf("Incorrect\n\n");
       }

        printf("ctrl + o key used in window \n");
       printf("option\n");
       printf("a) to open a file         b)to delete a file \n");
       printf("c) to read a file         d) none of these \n");

       fflush(stdin);
       scanf("%c",&ans7);

       if(ans7 == 'a')
       {
           printf("correct\n\n");
       }
       else
       {
           printf("Incorrect\n\n");
       }
        printf("C language is a \n");
       printf("option\n");
       printf("a) assembly language        b)machine language \n");
       printf("c) high level language       d) none of these \n");

       fflush(stdin);
       scanf("%c",&ans7);

       if(ans7 == 'c')
       {
           printf("correct\n\n");
       }
       else
       {
           printf("Incorrect\n\n");
       }


     }
     else
     {
         printf("you are not egligible");
     }

  }
  else
  {
      return 0;
  }

    return 0;
}
