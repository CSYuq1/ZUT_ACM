#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    double num;
    cin>>num;
    printf("%lf\n",num);
    cout<<'*'<<right<<setw(10)<<fixed<<setprecision(3)<<num<<"*\n";
    cout<<'*'<<left<<setw(10)<<fixed<<setprecision(3)<<num<<"*\n";

    return 0;
}