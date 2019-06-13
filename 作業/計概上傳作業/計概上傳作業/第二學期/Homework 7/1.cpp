#include<stdio.h>
#include<stdlib.h>

struct node {
        int data;
        struct node *next;
};
struct node *head = NULL,*p;

void bkinsert(struct node **x){
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("Please enter a data : ");
    scanf("%d",&(p->data));
    p->next = *x;
    *x = p;
}
void bkdelete(struct node **x){
    struct node *p;
    p = *x;
    *x = (*x)->next;
    free(p);
}
void display(struct node *p){
    int i=0;
    while(p != NULL){
        i++;
        printf("node %d = %d\n",i,p->data);
        p = p->next;
    }
}

int main()
{
    int fns;
    printf("Choose 1 to insert data \nChoose 2 to delete data \n");
    printf("Choose 3 to display datas \nChoose 4 to exit \n");
    printf("Please enter a function to use :\n");

    void bkinsert(struct node **);
    void bkdelete(struct node **);
    void display(struct node *);
    
    while(scanf("%d",&fns)){
        if(fns == 1)
            bkinsert(&head);
        if(fns == 2)
            bkdelete(&head);
        if(fns == 3)
            display(head);
        if(fns == 4){
            printf("program is exited");
            break;
        }
        printf("\n\n");
        printf("Choose 1 to insert data \nChoose 2 to delete data \n");
        printf("Choose 3 to display datas \nChoose 4 to exit \n");
        printf("Please enter a function to use :\n");
    }
    return 0;
}
