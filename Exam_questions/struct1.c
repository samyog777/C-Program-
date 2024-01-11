#include <stdio.h>
struct temp
{
int a;
};
void func(struct temp s){
    s.a = 10;
    printf("%d\t", s.a);
}
main(){
    struct temp s;
    s.a=10;
    func(s);
    printf("%d\t", s.a);
}
