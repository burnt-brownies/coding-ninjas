/* You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise. An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.*/

bool checkArmstrong(int n){
    int original = n ;
    int NumberOfDigits = 0 ;

    while (original != 0) {
        NumberOfDigits++ ;
        original = original / 10 ;
    }

    original = n ;
    int sum = 0 ;

    while ( original != 0) {
        int digit = original % 10 ;
        int power = 1 ;
        for ( int i = 0 ; i < NumberOfDigits ; i++) {
            power = power * digit ;
        }
        sum = sum + power ;
        original = original / 10 ;
    }

    return n == sum ;
}