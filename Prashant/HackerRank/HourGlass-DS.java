/** There are  no of hourglasses in 2D array and an hourglass sum is the sum of an hourglass' values. 
 * this program Calculates the hourglass sum for every hourglass in ,
 *  then prints the maximum hourglass sum. */



import java.util.*;

public class HourGlass {

    public static void main(String[] args) {
        
        //taking input of order of matrix
        System.out.print(" enter the order of matrix :");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] array = new int[n][n];
        System.out.println();
        
        //taking input of element of array
        System.out.print(" enter the elements of array :");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                array[i][j] = sc.nextInt();// takes n*n inputs

            }

        }

        int maxSum, sum;
        maxSum = -64; // lowest possible sum is -63
        
        
        // calculates maximun sum
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                sum = 0;
                sum += array[i][j] + array[i][j + 1] + array[i][j + 2];
                sum += array[i + 1][j + 1];
                sum += array[i + 2][j] + array[i + 2][j + 1] + array[i + 2][j + 2];
                if (sum > maxSum) {
                    maxSum = sum;
                }
            }
        }

        System.out.println("maximum sum is : " + maxSum);
    }
}
