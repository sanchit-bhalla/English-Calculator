#include<iostream>
#include<math.h>
#include<windows.h>
#include<stdio.h>
#include<string.h>
using namespace std;
double fun(char a[])
{
    strrev(a);
    double k,s=0;
    int j=0,f=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        {
            k=pow(10,i);
            f=1;

        }
        else{
        s=s+((a[i]-48)*(pow(10,j)));
        j++;
        }
    }
    if(f==1)
    {
    s=s/k;
    }
    return s;
}
int main()
{
    cout<<"                            WELCOME TO SMART CALCULATOR"<<endl;
    while(1){
    char str[55];
    cout<<"\nAsk your question :";
    cin.getline(str,50);
    double d[10];
    char *a;
    char b[10][15];
    a=strtok(str," ,()");
    int i=0;
    while(a!=NULL)
    {
    strcpy(b[i],a);
    i++;
    a=strtok(NULL," ,()");
    }
    int f=0;
    for(int d=0;d<i;d++)
    {
        if(strcmp(b[d],"multiply")==0 || strcmp(b[d],"*")==0)
        {
            system("color 8e");
            double mul=1;
            for(int l=0;l<i;l++)
            {
                if (b[l][0]>=48 && b[l][0]<=57)
                {
                    mul=mul*fun(b[l]);
                }
             }
            cout<<mul;
            break;
        }
        else if(strcmp(b[d],"add")==0 || strcmp(b[d],"+")==0 || strcmp(b[d],"addition")==0 || strcmp(b[d],"plus")==0)
        {
            system("color 04");
            double sum=0;
            for(int l=0;l<i;l++)
            {
            if (b[l][0]>=48 && b[l][0]<=57)
                {
                    sum=sum+fun(b[l]);
                }
             }
            cout<<sum;
            break;
        }
        else if(strcmp(b[d],"subtract")==0)
        {
            system("color 60");
            double s_b=0;
            for(int l=0;l<i;l++)
            {
            if (b[l][0]>=48 && b[l][0]<=57)
                {
                    s_b=(fun(b[l]))-s_b;
                }
             }
            cout<<s_b;
            break;
        }
        else if(strcmp(b[d],"minus")==0 || strcmp(b[d],"-")==0)
        {
            system("color 80");
            double s_b2=0;
            int count_=0;
            for(int l=0;l<i;l++)
            {
            if (b[l][0]>=48 && b[l][0]<=57)
                {
                    if(count_==0)
                    {
                        s_b2=(fun(b[l]))-s_b2;
                        count_++;
                    }
                    else{
                        s_b2=s_b2-fun(b[l]);
                    }
                }
             }
            cout<<s_b2;
            break;
        }
        else if(strcmp(b[d],"power")==0 ||  strcmp(b[d],"**")==0 ||strcmp(b[d],"^")==0 || strcmp(b[d],"pow")==0)
        {
            system("color 9f");
            double pw;
            int f=0;
            for(int l=0;l<i;l++)
            {
            if (b[l][0]>=48 && b[l][0]<=57)
                {
                    if(f==0)
                    {
                        pw=fun(b[l]);
                        f=1;
                    }
                    else{
                        pw=pow(pw,fun(b[l]));
                    }
                }
             }
            cout<<pw;
            break;
        }
        else if(strcmp(b[d],"sin")==0)
        {
            system("color 40");
            double ans,rad;
            for(int l=0;l<i;l++)
            {
            if (b[l][0]>=48 && b[l][0]<=57)
                {
                    rad=fun(b[l])*(3.14/180);
                    ans=sin(rad);
                }
             }
            cout<<ans;
            break;
        }
        else if(strcmp(b[d],"clear")==0 ||strcmp(b[d],"clr")==0)
        {
            system("color f0");
            system("cls");
            cout<<"                            WELCOME TO SMART CALCULATOR"<<endl;
        }
        else if(strcmp(b[d],"exit")==0 || strcmp(b[d],"close")==0)
        {
            return 0;
        }
         else{f++;}

    }
    if(f==i)
    {
        cout<<"Sorrry ,i don't understand your question"<<endl;
    }
    }
}
