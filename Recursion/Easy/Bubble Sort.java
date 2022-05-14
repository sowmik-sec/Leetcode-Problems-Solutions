import java.util.Scanner;

public class BubbleSortWithRecursion {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        bubble_sort(a,n);
        for (int i = 0; i < n; i++) {
            System.out.print(a[i]+" ");
        }
        System.out.println();
    }

    private static void bubble_sort(int[] a, int n) {
        if(n==1) return;
        for(int i=0;i<n-1;i++) {
            if(a[i]>a[i+1]) {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        bubble_sort(a,n-1);
    }
}
