bitset<10001>pr;
int pl[1230], s;
void sieve(int mx)
{
    for(int p=4; p<=mx; p+=2)pr[p]=1;
    for(int p=3; p*p<=mx; p+=2)if(!pr[p])if(p<=sqrt(mx))for(int i=p*p; i<=mx; i+=p)pr[i]=1;
    for(int i=2; i<=mx; i++)if(!pr[i])pl[s++]=i;
}
