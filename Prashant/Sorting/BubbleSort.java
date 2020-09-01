
/** this program shows the implementation of bubble sort */
import java.io.IOException;
import java.util.Scanner;

public class BubbleSort {
    public static void main(String[] args) {
        int[] a = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23 };
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (a[i] < a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        System.out.println("Printing Sorted List ...");
        for (int i = 0; i < 10; i++) {
            System.out.println(a[i]);
        }
    }
}

// Worst Case Time Complexity [ Big-O ]: O(n2)
// Best Case Time Complexity [Big-omega]: O(n)
// Average Time Complexity [Big-theta]: O(n2)
// Space Complexity: O(1)
