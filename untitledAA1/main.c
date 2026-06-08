#include <stdio.h>
struct student {
    char name[50];
    float notes;
};
void sort(struct student st[],int a) {
    struct student stg;
    for(int i=0;i<a;i++) {
        for(int j=0;j<a-i-1;j++) {
            if (st[j].notes<st[j+1].notes) {
                stg=st[j];
                st[j]=st[j+1];
                st[j+1]=stg;
            }
        }
    }

}
int main(void) {
    int a;
    printf("please enter number of the students");
    scanf("%d",&a);
    struct student st[a];
    for(int i=0;i<a;i++) {
        printf("%d's studens name:",i+1);
        scanf(" %s",st[i].name);
        printf("%d's studens notes:",i+1);
        scanf(" %f",&st[i].notes);
    }
    sort(st,a);
    printf("Stundents ordered by their notes\n");
    for(int i=0;i<a;i++) {
        printf("student name:%s and its note:%f\n",st[i].name,st[i].notes);
    }
    return 0;
}