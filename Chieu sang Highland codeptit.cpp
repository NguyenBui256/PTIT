#include<stdio.h>
#include<math.h>

int nt(int n)
{
    if(n == 0 || n == 1) 
    {
        return 0;
    }  
    for(int i = 2; i <= sqrt(n); i++) 
    {
        if(n % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int tn(long long n) 
{
    long long sum = 0;
    long long m = n;
    while(m) 
    {
        sum = sum*10 + m % 10;
        m/=10;
    }
    if(sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

long long rev(long long n) 
{
    long long sum = 0;
    long long m = n;
    while(m) 
    {
        sum = sum*10 + m % 10;
        m/=10;
    }
    return sum;
}

int hh(int n) 
{
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(i != (n/i))
            {
                sum = sum + i + (n/i);
            }
            else
            {
                sum += i;
            }
        }
    } 
    if(sum == n) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

long long gt(int n)
{
     long long sum = 1;
    for(int i = 1; i <= n; i++) 
    {
        sum *= i;
    }
    return sum;
}

int strong (int n) 
{
    int m = n;
    int sum = 0;
    while(m) 
    {
        sum += gt(m % 10);
        m/=10;
    }
    if(sum == n) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



long long gcd(long long a, long long b)
{
    while(b)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int tcs(int n) 
{
    int sum = 0;
    int m = n;
    while(m) 
    {
        sum += m % 10;
        m /= 10;
    }
    return sum;
}

int pc(int n) 
{
    int m = n;
    while(m) 
    {
        int r = m % 10;
        if(r == 9) 
        {
            return 0;
        }
        m /= 10;
    }
    return 1;
}
int cnt[10002] = {0};

long long C(int n, int k)
{
    long long tich = 1;
    for(int i = 1; i <= k; i++) 
    {
        tich *= (n - i + 1);
        tich /= i;
    }
    return tich;
}
int mod = 1000000007;
long long bpow(long long a, long long b) 
{
    if(b == 0) 
    {
        return 1;
    }
    long long x = bpow(a, b / 2);
    if(b % 2 == 1) 
    {
        return ((x % mod) * (x % mod) % mod) * (a % mod) % mod;
    }
    else
    {
        return (x % mod) * (x % mod) % mod;
    }
}

int check2(int n) 
{
    int m = n;
    int x = m % 10;
    m /= 10;
    while(m) 
    {
        int r = m % 10;
        if(r > x) 
        {
            return 0;
        }
        x = r;
        m /= 10;
    }
    return 1;
}

void sort(int a[], int n) 
{
    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(a[j] < a[i])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int cnta[1001] = {0}, cntb[1001] = {0}, cntA[1001] = {0}, cntB[1001] = {0};

int R[10000003] = {0};
int solve(int n)
{
    if(!nt(n))
    {
        return 0;
    }
    else if(!nt(tcs(n)))
    {
        return 0;
    }
    else
    {
        int m = n;
        while(m) 
        {
            int r = m % 10;
            if(!nt(r)) 
            {
                return 0;
            }
        }
        return 1;
    }    
} 
 
long long pre[1000][1000] = {0};

int main()
{
    int n, m, k; 
    scanf("%d%d%d", &n, &m,&k);
    int a[m+1];
    int b[n+2];
    for(int i = 1; i <= n; i++) 
    {
    	b[i] = 0;
	}
    for(int i = 1; i <= m; i++) 
    {
        scanf("%d", &a[i]);
        b[a[i]] = 1;
    }
    
    int x = 1;
    for(int i = 1; i <= m; i++) 
    {
        int l = a[i] - k;
        int r = a[i] + k;
        if(l < 1) 
    	{
    		for(int j = 1; j <= a[i]; j++) 
    		{
    			b[j] = 1;
			}
		}
        else if(l >= 1) 
        {
            for(int j = l; j <= a[i]; j++) 
            {
                b[j] = 1;
            }
        }
        if(r > n)
        {
            for(int j = a[i] + 1; j <= n; j++) 
    		{
    			b[j] = 1;
			}
        }
        else if(r <= n) 
        {
            for(int j = a[i] + 1; j <= r; j++) 
            {
                b[j] = 1;
            }
        }
    }
    int dem = 0;
    for(int i = 1; i <= n; i++) 
    {
        if(b[i] == 0) 
        {
            dem++;
            for(int j = i; j <= i + 2*k; j++)
            {
            	if(j <= n)
            	{
            		b[j] = 1;
				}
            }
        }
    }
    printf("%d", dem);
    
}