#include <stddef.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>

//
// Created by HAO on 2023/8/26.
//
struct Node{
    char data;
    struct Node* next;
}*top = NULL;

void push(char data){
    struct Node *t;
    t = (struct Node*)malloc(sizeof (struct Node));
    if(t == NULL){
        printf("Stack is full");
    } else{
        t->data = data;
        t->next = top;
        top = t;
    }
}

char pop(){
    char result = ' ';
    if(top == NULL){
        printf("The Stack is Empty!\n");
    } else{
        struct Node * t;
        t = top;
        result = t->data;
        top = top->next;
        free(t);
    }
    return result;
}



void display(){
    struct Node *t;
    t = top;
    if(t == NULL){
        printf("Stack is empty!\n");
    } else{
        while (t){
            printf("%d ", t->data);
            t = t->next;
        }
        printf("\n");
    }
}
int isBalanced(char *exp) {
    for (int i = 0; i < exp[i] != '\0'; ++i) {
        if(exp[i] == '('){
            push('(');
        } else{
            if(exp[i] == ')'){
                if(top == NULL){
                    return 0;
                } else{
                    pop();
                }
            }
        }
    }
    if(top == NULL){
        return 1;
    } else{
        return 0;
    }
}

int isOperand(char x){
    if(x =='+' || x == '-' || x == '*' || x == '/'||x == '(' || x == ')' || x == '^'){
        return 0;
    }
    return 1;
}

int pre(char x){
    if (x == '+' || x == '-'){
        return 1;
    } else if(x == '*' || x == '/'){
        return 2;
    } else{
        return 0;
    }
}

//栈外优先级
int out_stack_pre(char x){
    if (x == '+' || x == '-'){
        return 1;
    } else if(x == '*' || x == '/'){
        return 3;
    } else if(x == '^'){
        return 6;
    } else if(x == '('){
        return 7;
    } else if(x == ')'){
        return 0;
    }
    return 0;
}

//栈内优先级
int in_stack_pre(char x){
    if (x == '+' || x == '-'){
        return 2;
    } else if(x == '*' || x == '/'){
        return 4;
    } else if(x == '^'){
        return 5;
    } else if(x == '('){
        return 0;
    } else if(x == ')'){
        return 0;
    }
    return 0;
}

int isPa(char temp){
    if(temp == '(' || temp == ')'|| temp == '#'){
        return 1;
    } else{
        return 0;
    }
}

char * in2post(char *infix){
    int length = strlen(infix);
    char *postfix = (char *)  malloc((length+2) * sizeof (char ));
    int i= 0,j = 0;
    while (infix[i] != '\0'){
        if(isOperand(infix[i])){
            postfix[j++] = infix[i++];
        } else{
            if(pre(infix[i]) > pre(top->data)){
                push(infix[i++]);
            } else{
                postfix[j++] = pop();
            }
        }
    }
    while (top != NULL){
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}

char * in2post_v2(char *infix){
    int length = strlen(infix);
    char *postfix = (char *)  malloc((length+2) * sizeof (char ));
    int i= 0,j = 0;
    while (infix[i] != '\0'){
        if(isOperand(infix[i])){
            postfix[j++] = infix[i++];
        } else{
            if(out_stack_pre(infix[i]) > in_stack_pre(top->data)){
                push(infix[i++]);
            } else{
                char temp = pop();
                if(!isPa(temp)){
                    postfix[j++] = temp;
                } else{
                    i++;
                }
            }
        }
    }
    while (top != NULL){
        char temp = pop();
        if(!isPa(temp)){
            postfix[j++] = temp;
        }
    }
    postfix[j] = '\0';
    return postfix;
}

int main(){
//    char *exp = "(((a+b)*(c-d))";
//    printf("%d\n", isBalanced(exp));


    char *infix = "a+b*c-d/e";
    char *infix2 = "((a+b)*c-d^e^f";
    push('#');
//    char *postfix = in2post(infix);
//    printf("%s\n",postfix);
    char *postfix = in2post_v2(infix2);
    printf("%s\n",postfix);


}