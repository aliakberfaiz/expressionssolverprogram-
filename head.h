//dev by aliakberfaiz

#include<conio.h>
#include<stdio.h>
#include<string.h>
/*
functions in this header file are:-
1. sti:- converts string form of a number to integer(string to int).
2. its:- converts integer form of a number to string form (int to string).
3. indexer:- used to index the numbers in the string expression.
*/

int sti(char a[])
{
int i=0,num=0;
while(a[i])
{
    num=num*10;
    num=num+(a[i]-'0');
    i++;
}
return num;
}
void its(int num,char a[])
{
    int i;
    i=0;
    while(num)
    {
        switch(num%10)
        {
            case 0:a[i]='0';
            break;
            case 1:a[i]='1';
            break;
            case 2:a[i]='2';
            break;
            case 3:a[i]='3';
            break;
            case 4:a[i]='4';
            break;
            case 5:a[i]='5';
            break;
            case 6:a[i]='6';
            break;
            case 7:a[i]='7';
            break;
            case 8:a[i]='8';
            break;
            case 9:a[i]='9';
            break;
            }
            num=num/10;
            i=i+1;
    }
    a[i]='\0';
    strrev(a);
}
void indexer(char a[],int b[])
{
    int i=0;
    int c=1;
    while(a[i])
    {
    if(a[i]>='0'&& a[i]<='9')
    {
       b[i]=c;
       i=i+1;
       continue;
    }
    else if(b[i-1]!=0&& i!=0)
    {
     b[i]=0;
     c=c+1;
     i=i+1;
    }
    else
    {
        b[i]=0;
        i=i+1;
    }
        }
    b[i]=0;
}
