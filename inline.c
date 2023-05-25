#include <stdio.h>
inline int sum(int a, int b) { return a + b; }
}
int main()
{

    int var = sum(10, 20);
    printf("%d", var)
}