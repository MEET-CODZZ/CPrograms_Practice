#include<stdio.h>
int main(){
    void fun(); // Useless chizz hai ye. itna bhi nahi hai kabhi kabhi use ho jata hai.
    fun();
    fun();
    return 0;
}
void fun(){
    printf("Hello\n");
}