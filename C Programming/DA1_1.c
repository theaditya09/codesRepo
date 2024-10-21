// You are using GCC
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char st[100];
int top = -1;

bool isEmpty()
{
    return top==-1;
}

void push(char val)
{
    if(top == 99)
    {
        return;
    }
    else{
        top++;
        st[top] = val;
    }
}

void pop()
{
    if(top == -1)
    {
        return;
    }
    else{
        top--;
    }
}

char peek()
{
    if(top == -1)
    {
        return 'F';
    }
    else{
        return st[top];
    }
}

void reverse(char* str)
{
    int l = 0;
    int r = strlen(str) - 1;
    
    while(l<r)
    {
        
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
}

int precedence(char ch)
{
  if(ch == '^') return 3;
  if(ch == '*' || ch == '/') return 2;
  if(ch == '+' || ch == '-') return 1;
  return 0;
}

bool isLeftAss(char ch)
{
    return ch!='^';
}

void convert(char* str)
{
    reverse(str);
    char ans[100] = "";

    
    for(int i=0; i<strlen(str); i++)
    {
        char ch = str[i];
        char temp[2] = {ch,'\0'};
        
        if(ch >= '0' && ch <= '9')
        {
            strcat(ans,temp);
        }
        else{
            if( ch == ')' )
            {
                push(ch);
            }
            else if( ch == '(' )
            {
                while(!isEmpty() && peek()!=')')
                {
                    char ret = peek();
                    char temp2[2] = {ret, '\0'};
                    strcat(ans,temp2);
                    pop();
                }
                pop();
            }
            else{
                if(isEmpty())
                {
                    push(ch);
                }
                else if( precedence(ch) > precedence(peek()) )
                {
                    push(ch);
                }
                else if(precedence(ch) == precedence(peek()))
                {
                    if(isLeftAss(ch))
                    {
                        push(ch);
                    }
                }
                else{
                    while(!isEmpty() && precedence(ch) < precedence(peek()) )
                    {
                        char ret = peek();
                        char temp2[2] = {ret, '\0'};
                        strcat(ans,temp2);
                        pop();
                    }
                }
            }
        }
    }
    
    while(!isEmpty()){
        char temp[2] = {peek(), '\0'};
        strcat(ans,temp);
        pop(); 
    }
    
    reverse(ans);
    printf("%s",ans);
    
}

int main()
{
    char str[100];
    scanf("%s",str);
    
    convert(str);
    //printf("%s",str);
     
}

// Input 1 :
// (2+1)*4
// Output 1 :
// *+214
// Input 2 :
// (5/1)*4+2
// Output 2 :
// +*/5142











