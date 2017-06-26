#include<iostream>
#include<string>
using namespace std;
string zigzag(string A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len=A.length();
    int row=0;
    bool down;
    string arr[B];
    if(B==1)
    return A;
    for(int i=0;i<len;i++)
    {
        arr[row].push_back(A[i]);
        if(row==B-1)
        down=false;
        if(row==0)
        down =true;
        down?row++:row--;
        
    }
    string X="";
    for(int i=0;i<row;i++)
    {
        X=X+arr[i];
    }
    return X;
    
}

int main()
{
	string A="RahulKUmar";
	int b=4;
	zigzag(A,4);
	string X=zigzag(A,4);
	cout<<X;
}
