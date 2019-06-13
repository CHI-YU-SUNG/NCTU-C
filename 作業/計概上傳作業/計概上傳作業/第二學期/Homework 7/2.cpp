#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node *next;
    };
struct node *head, *tail, *p;

void findmin(struct node *head){
    int min;
    struct node *p = head;
    min = p->data;
    while(p!=NULL){
        if(p->data < min)
            min = p->data;
        p = p->next;
    }
    printf("The minimum is = %d",min);
}

void delneg(struct node **head){
    struct node *p = (*head)->next, *r = (*head);
    while(p!=NULL){
        if(p->data < 0){
            r->next = p->next;
            free(p);
            p = r->next;
        }
        else{
            r = p;
            p = p->next;
        }
    }
    if((*head)->data<0)
        (*head) = (*head)->next;
}

int main()
{
    int num = 0,k=0;
    printf("Amount of data : ");
    scanf("%d",&num);
    
    head = (struct node *)malloc(sizeof(struct node));
    tail = head;
    for(int i=0;i<num;i++){
        p = (struct node*)malloc(sizeof(struct node));
        printf("enter the value%02d : ",i+1);
        scanf("%d",&(p->data));
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
    p = head;
    head = head->next;
    free(p);
    //printf("tail = %u",tail->next);
    p = head;
    while(p!=NULL){
        k++;
        printf("node %d = %d\n",k,p->data);
        p = p->next;
    }

    findmin(head);
    delneg(&head);
    printf("\n\nNon-negtive nodes : \n");
    p = head;
    k = 0;
    while(p!=NULL){
        k++;
        printf("node %d = %d\n",k,p->data);
        p = p->next;
    }

    return 0;
}
