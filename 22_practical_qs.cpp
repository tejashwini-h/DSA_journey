 #include<iostream>
 using namespace std;
 bool isprime(int n)//prime number
 { 
    if(n==1)
    {
         return false;
    }
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            return false;

        }
    }
    return true;
 } 
 int fact(int n)
 { 
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;

}
 int isbinomial(int n,int r)
 { 
    int b,v1,v2,v3;
    v1=fact(n);
    v2=fact(r);
    v3=fact(n-r);
    b= v1/(v2*v3);
    return b;
 }
 int main()
 {
    int num,ra;
    cout<<isprime(23)<<endl;
    cout<<isbinomial(3,2)<<endl;


    return 0;

 }