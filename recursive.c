#include<stdio.h>

#include<string.h>

char input[100];
int T();
int TP();
int F();
int EP();
int E();
int i,l;

void main()

{

    printf("\nRecursive descent parsing for the following grammar\n"); 
    printf("\nE->TE'\nE'->+TE'/@\nT->FT'\nT'->*FT'/@\nF->(E)/ID\n"); 
    printf("Enter string to be checked: \n");
    scanf("%s",input);
    

if(E()==1)

{

if(input[i+1]=='\0')

printf("\nString is accepted\n");

else

printf("\nString is not accepted\n");

}

else

printf("\nString not accepted\n");


}

int E()

  {

    if(T())
        {
        if(EP())

          return(1);

        else

          return(0);

        }
    else
      return(0);

}

int EP()

{

if(input[i]=='+')

{

i++;

if(T())

{

if(EP())

return(1);

else

return(0);

}

else

return(0);

}

else

return(1);

}

int T()

{

if(F())

{

if(TP())

return(1);

else

return(0);

}

else

return(0);

}

int TP()

{

if(input[i]=='*')

{

i++;

if(F())

{

if(TP())

return(1);

else

return(0);

}

else

return(0);

}

else

return(1);

}

int F()

{

if(input[i]=='(')

{

i++;

if(E())

{

if(input[i]==')')

{

i++;

return(1);

}

else

return(0);

}

else

return(0);

}

else if(input[i]>='a'&&input[i]<='z'||input[i]>='A'&&input[i]<='Z')

{

i++;

return(1);

}

else

return(0);
}
