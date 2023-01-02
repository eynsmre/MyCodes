
#include <stdio.h>
//Full code quick select
int partition(int *a, int l, int r) {
    int x = a[l], j = l;
    int i;
    for (i = l + 1; i <= r; i++) {
        if (a[i] <= x) {
            j++;
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    int tmp = a[l];
    a[l] = a[j];
    a[j] = tmp;
    return j;
}

int quick_select(int *a, int l, int r, int k) {
    if (l == r) return a[l];
    int m = partition(a, l, r);
    if (m == k) return a[m];
    if (m > k) return quick_select(a, l, m - 1, k);
    return quick_select(a, m + 1, r, k);
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    int i;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    	printf("%d", quick_select(a, 0, n - 1, k - 1));
    return 0;
}

