#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
/*
    int a,b,c;
    cin>>a>>b>>c;
    int first,second,third;

    if(a>b && a>c && b>c){first=c; second=b; third=a;}
    else if(a>b && a>c && c>b){first=b; second=c; third=a;}
    else if(b>a && b>c && a>c){first=c; second=a; third=b;}
    else if(b>a && b>c && c>a){first=a; second=c; third=b;}
    else if(c>a && c>b && a>b){first=b; second=a; third=c;}
    else {first=a; second=b; third=c;}

    if(first+second==third)
        cout<<"YES\n";
    else cout<<"NO\n";
*/
    int a[3];
    int i;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);

    if(a[0]+a[1]==a[2]) cout<<"YES\n";
    else cout<<"NO\n";


    }





    return 0;
}
