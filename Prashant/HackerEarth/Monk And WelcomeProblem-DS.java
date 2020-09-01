
/**this program prints C[i]=A[i]+B[i] */

import java.util.Scanner;

public class WelcomeProblem {
    public static void main(String[] args) {

        // takes input for size of array
        Scanner sc = new Scanner(System.in);
        System.out.print(" enter size of array : ");
        int n = sc.nextInt();
        int A[] = new int[n];
        int B[] = new int[n];
        int C[] = new int[n];
        System.out.println();

        // takes intput for elements of A[]
        System.out.print(" A[]= ");
        for (int i = 0; i < n; i++) {
            A[i] = sc.nextInt();

        }

        System.out.println();
        // takes intput for elements of B[]
        System.out.print(" B[]= ");
        for (int i = 0; i < n; i++) {
            B[i] = sc.nextInt();

        }

        System.out.println();
        // sums up the elements of A[] and B[]
        System.out.print(" C[]= ");
        for (int i = 0; i < n; i++) {
            C[i] = A[i] + B[i];
            System.out.print(C[i] + " ");
        }

    }
}
