#include <stdio.h>
struct ele{
    union {
        struct{
            int* p;
            int x;
        }e1;
        int y[3];
    };
    struct ele *next;
};
void proc(struct ele *up){
    up->next->y[0]=*(up->e1.p)+up->y[2];
}
int main(){
    struct ele *a;
    a->e1.p=&a->e1.x;
    a->e1.x=1;
    a->y[0]=2;
    a->y[1]=3;
    a->y[2]=4;
    a->next=&a;
    proc(a);
    return 0;
}
