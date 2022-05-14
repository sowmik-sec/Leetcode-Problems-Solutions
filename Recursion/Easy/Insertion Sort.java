import java.util.Scanner;

public class InsertionSort {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        insertion_sort(a,n);
        for (int i = 0; i < n; i++) {
            System.out.print(a[i]+" ");
        }
        System.out.println();
    }

    private static void insertion_sort(int[] a, int n) {
        if(n==1) return;
        insertion_sort(a,n-1);
        int last = a[n-1];
        int j = n-2;
        while(j>=0 && a[j]>last)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = last;
    }
}