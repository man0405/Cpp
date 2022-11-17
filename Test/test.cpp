#include <iostream>

using namespace std;

// Tìm kiếm tuần tự.
int sequential_search(int a[], int n, long long kth_fibo)
{
    for (int i = 1; i <= n; ++i)
        if (a[i] == kth_fibo)
            return i;
            
    return -1;
}

// Tìm số fibonacci thứ k.
long long find_kth_fibo(int k)
{
    if (k <= 1)
        return k;
        
    long long f0 = 0, f1 = 1, fk;
    for (int i = 2; i <= k; ++i)
    {
        fk = f0 + f1;
        f0 = f1;
        f1 = fk;
    }
    
    return fk;
}

int main()
{
    // Nhập dữ liệu n, k và dãy số.
    int n, k;
    cin >> n >> k;
    
    int a[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
        
    cout << sequential_search(a, n, find_kth_fibo(k));
}
