#include <iostream>

using namespace std;
int prime[78500];
bool isVisit[1000001];

void foo(int m, int n, int start);

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int primenum(int m, int n) {
    int sum = 0;
    sum = 0;
    for (int i = m; i <= n; i++) {
        if (isPrime(i)) {
            sum = sum + 1;
        }
    }
    return sum;
}

int foo(int m, int n) {
    int start = 0;
    if (m > n) {
        int exchange;
        exchange = m;
        m = n;
        n = exchange;
    }
    if (m > 999989) {
        return 0;
    }
    for (int i = 1; i <= 78498; i++)//����forѭ�������Զ��ֲ����Ż�����ac���ٹ�
        if (prime[i] >= m) {
            start = i;
            break;
        }
    for (int j = start; j <= 78498; j++)
        if (prime[j] > n)
            return j - start;

    return 78499 - start;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c = 0, m, n, start = 0;
    //ÿ����������������ǲ�������  false->����
    for (int i = 2; i <= 1000000; ++i)//�Ϲ�أ���������
    {
        if (!isVisit[i]) { //��������δ�����ʣ���������
            prime[++c] = i;//�����������������������棬����+1
            if (isPrime(!prime[c]))
                cout << "wrong prime" << prime[c] << endl;
            //cout << prime[c] << ",";
        }
        for (int j = 1; j <= c && i * prime[j] <= 1000000; ++j) {
            isVisit[i * prime[j]] = true;//����������õ������ֶ�������
            if (i % prime[j] == 0)
                break;
        }
    }
    /*
     * ��������ȫ������
     * ����������ݴ�����
     */
    cout <<"primenum(m,n): "<<primenum(999985,999999)<<endl;
    for (int n = 1000000; n--;)
        for (int m = 1000000; m--;) {
            if (primenum(m, n) != foo(m, n)) {
                cout <<"primenum(m,n): "<<primenum(m,n)<<" m: "<<m<<" n: "<<n<<endl;
                cout << "foo(m,n): " << foo(m, n) << " m: " << m << " n: " << n << endl;
                cout<<endl;
            }

        }

//int test=foo(999901,999999);
    // cout<<primenum(999991,999999);


    return 0;
}


