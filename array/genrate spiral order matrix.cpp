

    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < m && l < n)
    {

        for (i = l; i < n; ++i)
        {
            a[k][i]=x++;
        }
        k++;
 
        /* last column from the remaining columns */
        for (i = k; i < m; ++i)
        {
            a[i][n-1]=x++;
        }
        n--;
 
        /* last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                a[m-1][i]=x++;
            }
            m--;
        }
 
        /* first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                a[i][l]=x++;
            }
            l++;    
        }        
    }