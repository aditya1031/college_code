#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    long N;
	    int c=0;
	    long int A[N];
	    cin>>N;
	    for(int i=1;i<=N;i++)
	    cin>>A[i];
	    for(int i=1;i<N;i++)
	    {
	        for(long j=i;j<=N;j++)
	        {
	            long p=A[i]*A[j];
	            if((p>0)&&(i<j))
	            c=c+1;
	        }
	    }
	    cout<<c<<endl;
	    c=0;
    }
	return 0;
}