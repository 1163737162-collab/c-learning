void f( char *p)
{
    int n = 0;
    while(p[n]!='\0')
        n++;
    
    for (int i = 0;i < n/2;i++)
        {
            char temp = p[i];
            p[i]=p[n-1-i];
            p[n-1-i]=temp;
        }
        
}
