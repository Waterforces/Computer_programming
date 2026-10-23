 #include<iostream>
 #include<algorithm>
 using namespace std;

 int main() {
    int n,a[505],_max=0;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int r=-1;r<n;r++) {
        for(int i=0;i<n;i++) {
            int sum=0,tmp=0;
            if(i==r) continue ;
            for(int j=0;j<n;j++) {
                if(j==r) continue ;
                if(a[(i+j)%n]>=tmp) {
                    tmp=a[(i+j)%n];
                    sum+=tmp;
                }
                else break ;
            }
            _max=max(_max,sum);
        }
    }
    cout <<_max;
}  