/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
	    Scanner in = new Scanner(System.in);
	    int t = in.nextInt();
	    while(t>0) {
	        t--;
	        int a = in.nextInt();
	        int b = in.nextInt();
	        int c = in.nextInt();
	        int n = in.nextInt();
	        System.out.println(func(a,b,c,n));
	    }
	}
	static int func(int a,int b, int c, int n) {
        if(n==1) return a;
        if(n==2) return b;
        if(n==3) return c;
        return func(a,b,c,n-1)+func(a,b,c,n-2)+func(a,b,c,n-3);
    }
}