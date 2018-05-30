// Return 1 if A is prime, else 0
int isPrime(int A) {
	int upperLimit = (int)(sqrt(A));
	for (int i = 2; i <= upperLimit; i++) {
		if ( A % i == 0) return 0;
	}
	if(A==1)
	return 0;
	return 1;
}

// goldbachs conjecture
vector<int> Solution::primesum(int A) {
    
    vector<int> sol(2);
    
   	int upperLimit = A/2;
   	for (int i = 2; i <= upperLimit; i++){
   	    
	if(isPrime(i)&&isPrime(A-i))
	{
	    sol[0]=i;
	    sol[1]=A-i;
	    return sol;
	}
   	}
}