
#include <iostream>


using namespace std;


int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;
    // your code goes here
    int s=0,e=0;
    //starting
    if(p==1)
    {
        printf("0");
        return  0;
    }
    
    if(p%2==0)
        {
        s=p-p/2;
        e=n/2-s;
    }
    else{
        s=p-(p-1)/2;
        e=(n-1)/2-s;
        
        
    }
    printf("%d",(s>e?e:s));
    return 0;
}

