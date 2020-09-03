/** this program displays element of an array in reverse order */


import java.util.Scanner;

class Array {
    public static void main(String[] args) {
        
        //taking input for size of array
        Scanner scanner = new Scanner(System.in);
        System.out.print(" give the no of element :");
        int n = scanner.nextInt();// taking input
        int[] a = new int[n];
       
       System.out.println(" enter the elements :");
        //taking input for elements of array
        for (int i = 0; i <= n - 1; i++) {
            a[i] = scanner.nextInt();
        }
       
       // prints elemrnts in reverse order
        for (int i = n - 1; i >= 0; i--) {
            System.out.print(a[i] + " ");
        }
    }
}
