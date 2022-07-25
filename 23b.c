
#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
 for (i = 1; i < n; ++i)
 {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("%d is the nth no of the fibonacci series",nextTerm);

    return 0;
}
