#include<stdio.h>
struct student
{
    int admno;
    char name[40];
    int marks;
};
struct student a;
int main(){
    int n,Newadm;
    FILE* fp;
    do{
    printf("\nPress 1 - Add a new student");
    printf("\nPress 2 - Show all Student");
    printf("\nPress 3 - Search a Student");
    printf("\nPress 4 - Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&n);
    if(n == 1){
        fp = fopen("student.dat","ab");
        if(fp == NULL) printf("Cant open file");
    
        else{
            printf("Enter addmission no. : ");
            scanf("%d",&a.admno);
            fflush(stdin);
            printf("Enter name of student : ");
            gets(a.name);
            printf("Enter marks of student : ");
            scanf("%d",&a.marks);
            fwrite(&a,sizeof(a),1,fp);
            fclose(fp);
            printf("\nStudent Added\n");
        }
    }
    else if(n == 2){
        fp = fopen("student.dat","rb");
        if(fp == NULL) printf("Cant open file");
        else{
            while(fread(&a,sizeof(a),1,fp)){ // fread returns true or false.
                printf("\nFile pointer is at %d",ftell(fp));
                printf("\nAddmission no. : %d , Name : %s and Marks : %d",a.admno,a.name,a.marks);
            }
        }
        fclose(fp);
    }
    else if(n == 3){
        int found = 0;
        fp = fopen("student.dat","rb");
        if(fp == NULL) printf("Cant open file");
        else{
            printf("\nEnter addmission no. of student u want to search : ");
            scanf("%d",&Newadm);
            while(fread(&a,sizeof(a),1,fp)){
                if(Newadm == a.admno){
                    printf("\nDetails of that student :-");
                    printf("\nAddmission no. : %d , Name : %s and Marks : %d",a.admno,a.name,a.marks);
                    found = 1;
                    break;
                }
            }
            if(found == 0) printf("Student with admission no. %d not found.\n", Newadm);
        }
        fclose(fp);
    }
    else if(n == 4) break;
    }while(n!=4);

    return 0;
}