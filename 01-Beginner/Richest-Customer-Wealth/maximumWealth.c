#include<stdlib.h>

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxWealths = 0;

    // Calculate the wealth of each customer 
    for (int i=0; i<accountsSize ; i++) {
        int sum = 0;
        for (int j=0 ; j<accountsColSize[i] ; j++) {
            sum += accounts[i][j];
        }
    // Find tha Max of client's wealth
        if (sum > maxWealths) {
            maxWealths = sum;
        }
    }

return maxWealths;
}
