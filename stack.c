// You are using GCC
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    int arr[100];
    int top;
    
}stack;

void push(stack* st, int val)
{
    if(st->top < 99)
    {
        st->top++;
        st->arr[st->top] = val;
    }
    else{
        printf("Stack overflow");
    }
}

void pop(stack* st)
{
    if(st->top == -1)
    {
        printf("Stack Underflow");
    }
    else{
        st->top--;
    }
}

int top(stack* st)
{
    if(st->top != -1)
    {
        return st->arr[st->top];
    }
    else{
        printf("Empty stack");
        return -1;
    }
}

int main()
{
        stack* st = (stack*)malloc(sizeof(stack));
        st->top = -1;
        
        char str[100];
        fgets(str,100,stdin);

        if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = '\0';
        }
        
        for(int i=0; i<strlen(str); i++)
        {
            if(str[i]!=' ')
            {
                if(str[i] >= '0' && str[i] <= '9')
                {
                    int num = str[i] - '0';
                    push(st,num);
                    printf("Push : %d\n",num);
                }
                else{
                    int op2 = top(st);
                    printf("Pop : %d\n",op2);
                    pop(st);
                    int op1 = top(st);
                    printf("Pop : %d\n",op1);
                    pop(st);
                        
                    switch(str[i])
                    {
                        case '+' :  push(st,op1+op2);
                        printf("Push : %d\n",op1+op2);
                                    break;
                        case '-' :  push(st,op1-op2);
                        printf("Push : %d\n",op1-op2);
                                    break;
                        case '*' :  push(st,op1*op2);
                        printf("Push : %d\n",op1*op2);
                                    break;
                        case '/' :  push(st,op1/op2);
                        printf("Push : %d\n",op1/op2);
                                    break;
                        default: break;
                    }
                }
            }
        }
        
    printf("Answer : %d\n\n\n\n",top(st));
        free(st); 
}