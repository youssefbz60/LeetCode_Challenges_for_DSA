int findNumbers(int* nums, int numsSize) {
    int evenNums = 0;

    for (int i=0 ; i<numsSize ; i++) {
        int num_of_digits = 0;
        int tmp = nums[i];
        // division entiere par 10 
        while (tmp != 0) {
            num_of_digits++;
            tmp = tmp / 10;
        }

        // test if the number of digits is even
        if ( num_of_digits % 2 == 0 ) {
            evenNums++;
        }

    }

    return evenNums;
}
