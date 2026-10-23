#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> q1x,q1y,q2x,q2y,q3x,q3y,q4x,q4y;
    for(int i=0;i<n;i++) {
        double x,y;
        cin >> x >> y;
        if(x==0 || y==0) continue ;
        if(x>0 && y>0) {
            q1x.push_back(x);
            q1y.push_back(y);
        }
        else if(x<0 && y>0) {
            q2x.push_back(x);
            q2y.push_back(y);
        }
        else if(x<0 && y<0)  {
            q3x.push_back(x);
            q3y.push_back(y);
        }
        else {
            q4x.push_back(x);
            q4y.push_back(y);
        }
    }
    if(q1x.size()+q2x.size()+q3x.size()+q4x.size()==0) {
        cout << "No point in any quadrant";
        return 0;
    }
    if(q1x.size()>0) {
        sort(q1x.begin(),q1x.end());
        sort(q1y.begin(),q1y.end());
        cout << "Q1: ( " << q1x[0] << ", " << q1y[0] << ") (" << q1x[q1x.size()-1] << ", " << q1y[q1y.size()-1] << ") " << abs((q1x[0]-q1x[q1x.size()-1])*(q1y[0]-q1y[q1y.size()-1])) << "\n";
    }
    if(q2x.size()>0) {
        sort(q2x.begin(),q2x.end());
        sort(q2y.begin(),q2y.end());
        cout << "Q2: ( " << q2x[0] << ", " << q2y[0] << ") (" << q2x[q2x.size()-1] << ", " << q2y[q2y.size()-1] << ") " << abs((q2x[0]-q2x[q2x.size()-1])*(q2y[0]-q2y[q2y.size()-1])) << "\n";        
    }
    if(q3x.size()>0) {
        sort(q3x.begin(),q3x.end());
        sort(q3y.begin(),q3y.end());
        cout << "Q3: ( " << q3x[0] << ", " << q3y[0] << ") (" << q3x[q3x.size()-1] << ", " << q3y[q3y.size()-1] << ") " << abs((q3x[0]-q3x[q3x.size()-1])*(q3y[0]-q3y[q3y.size()-1])) << "\n";
    }
    if(q4x.size()>0) {
        sort(q4x.begin(),q4x.end());
        sort(q4y.begin(),q4y.end());
        cout << "Q4: ( " << q4x[0] << ", " << q4y[0] << ") (" << q4x[q4x.size()-1] << ", " << q4y[q4y.size()-1] << ") " << abs((q4x[0]-q4x[q4x.size()-1])*(q4y[0]-q4y[q4y.size()-1])) << "\n";        
    }
}