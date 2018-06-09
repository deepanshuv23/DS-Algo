string Solution::intToRoman(int number) {
    
     string c="";
    int i = 0;
 
    // If number entered is not valid
   
    // TO convert decimal number to roman numerals
    while (number != 0)
    {
        // If base value of number is greater than 1000
        if (number >= 1000)
        {
            // Add 'M' number/1000 times after index i
            i = number/1000;
            while(i--)
            {
                c+='M';
            }
            number = number%1000;
        }
 
        // If base value of number is greater than or
        // equal to 500
        else if (number >= 500)
        {
            // To add base symbol to the character array
            if (number < 900)
            {
               
                i = number/500;
            while(i--)
            {
                c+='D';
            }
               number = number%500;
            }
 
            // To handle subtractive notation in case of number
            // having digit as 9 and adding corresponding base
            // symbol
            else
            {
                // Add C and M after index i/.
                c+="CM";
                number = number%100 ;
            }
        }
 
        // If base value of number is greater than or equal to 100
        else if (number >= 100)
        {
            // To add base symbol to the character array
            if (number < 400)
            {
                 i = number/100;
            while(i--)
            {
                c+='C';
            }
                number = number%100;
            }
 
            // To handle subtractive notation in case of number
            // having digit as 4 and adding corresponding base
            // symbol
            else
            {
                c+="CD";
                number = number%100;
            }
        }
 
        // If base value of number is greater than or equal to 50
        else if (number >= 50 )
        {
            // To add base symbol to the character array
            if (number < 90)
            {
                 i = number/50;
            while(i--)
            {
                c+='L';
            }
                number = number%50;
            }
 
            // To handle subtractive notation in case of number
            // having digit as 9 and adding corresponding base
            // symbol
            else
            {
                c+="XC";
                number = number%10;
            }
        }
        // If base value of number is greater than or equal to 10
        else if (number >= 10)
        {
            // To add base symbol to the character array
            if (number < 40)
            {
                 i = number/10;
            while(i--)
            {
                c+='X';
            }
                number = number%10;
            }
 
            // To handle subtractive notation in case of
            // number having digit as 4 and adding
            // corresponding base symbol
            else
            {
                c+="XL";
                number = number%10;
            }
        }
 
        // If base value of number is greater than or equal to 5
        else if (number >= 5)
        {
            if (number < 9)
            {
                c+='V';
                number = number%5;
            }
 
            // To handle subtractive notation in case of number
            // having digit as 9 and adding corresponding base
            // symbol
            else
            {
                c+="IX";
                number = 0;
            }
        }
 
        // If base value of number is greater than or equal to 1
        else if (number >= 1)
        {
            if (number < 4)
            {
                 i = number;
            while(i--)
            {
                c+='I';
            }
                number = 0;
            }
 
            // To handle subtractive notation in case of
            // number having digit as 4 and adding corresponding
            // base symbol
            else
            {
                c+="IV";
                number = 0;
            }
        }
    }
    
    return c;
}
