#include<stdio.h>
#include<stdlib.h>
struct pinpo{
    int a;
    struct pinpo *next;
};
struct pinpo *create(int *arr,int n,int nu){
    struct pinpo *NEW,*p1,*p2;
    p1=p2=(struct pinpo*)malloc(sizeof(struct pinpo));
    p1->next=NULL;
    p2->next=NULL;
    for(int i=0;i<nu;i++){
        if(i==0){
            p1->a=arr[i];
            NEW=p1;
            p2=p1;
        }
        else{
            p1=(struct pinpo*)malloc(sizeof(struct pinpo));
            p1->a=arr[i];
            p2->next=p1;
            p2=p1;
        }
    }
    p2->next=NULL;
    return NEW;
}
int main(){
    struct pinpo *p1,*p2;
    int a[100],n,i=0,k=0;
    scanf("%d",&n);
    scanf("%d",&a[i]);
    while(a[i]!=-1){
        k++;
        i++;
        scanf("%d",&a[i]);
    }
    p1=p2=create(a, n, k);
    if (n>k) {
        printf("NULL\n");
    }
    else{
        for(i=0;i<k;i++){
            if(i==k-n){
                printf("%d\n",p1->a);
            }
            p1=p1->next;
        }
    }
    return 0;
}
