#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 100
#include<ctype.h>

char stack[SIZE];
int top = -1;

void push(char ch){
    stack[++top]=ch;
}

char pop(){
    return stack[top--];
}

int precedence(char ch){
    if(ch == '^')return 3;
    if(ch == '*'||ch == '/')return 2;
    if(ch == '+'||ch == '-')return 1;
    return 0;
}

void infixpostfix(){
    char infix[SIZE],postfix[SIZE];
    int K = 0;
}
