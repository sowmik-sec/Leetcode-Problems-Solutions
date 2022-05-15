import java.util.Scanner;

public class BSplit {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int ans = waysToSplitArray(a);
        System.out.println(ans);
    }
    public static int waysToSplitArray(int[] nums) {
        int[] sum = new int[nums.length];
        for(int i=0;i<nums.length;i++)
        {
            if(i==0) sum[i] = nums[i];
            else {
                sum[i] = nums[i] + sum[i-1];
            }
        }
        int cnt = 0;
        for(int i=0;i<nums.length-1;i++) {
            System.out.println(sum[i]+" "+(sum[nums.length-1]-sum[i]));
            if(sum[i]>=(sum[nums.length-1]-sum[i]))++cnt;
        }
        return cnt;
    }
}
