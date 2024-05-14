#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int i , j , f=0, sereja = 0, dima = 0;
    for(i=0;i<n;i++) cin>> v[i] ;

    while ( !v.empty() )
    {
        if(f == 0){
           if(v[0] > v.back()){
                sereja+=v[0];
                v.erase(v.begin());
           }
             else
             {
                sereja+=v.back();
                v.pop_back();
             }
             f=1;
        }
        else{
            if(v[0] > v.back()){
                dima+=v[0];
                v.erase(v.begin());
            }else{
                dima+=v.back();
                v.pop_back();
            }
            f=0;
        }
    }
        cout<<sereja<<"  "<<dima<<endl;
    
}