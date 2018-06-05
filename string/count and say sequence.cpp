string Solution::countAndSay(int n) {
    if(n==1)
        return "1";
    
    if(n==2)
    return "11";
    
     int cnt = 1; // Initialize count of matching chars
    string  tmp = ""; 
    string str="11";
    for(int i=3;i<=n;i++)
    {
        //str+='&';
        
        int t=str.length();
        
        for(int j=1;j<=t;j++)
        {
            if(str[j]!=str[j-1])
            {
                tmp+= cnt +'0';
                tmp+= str[j-1];
                cnt=1;
            }
            else
            {
                cnt++;
            }
        }
        str=tmp;
        
        
    }
    
    return str;
}
