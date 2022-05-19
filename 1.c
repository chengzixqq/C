#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err34-c"
#include <stdio.h>

int main()
/*{
    printf("qqq\n");
    printf("abc");
    return 0;
}*/

/*{
    char  ch = 'a';
    int age = 20;
    printf("%d\n", ch);

    return 0;
}*/

{
    int a = 1;
    int b = 3;
    scanf("%d %d",&a,&b);
    int sum = a + b;
    printf("sum = %d\n",sum);

    return 0;
}
#pragma clang diagnostic pop