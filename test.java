/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Reader sc = new Reader();
        int t = sc.nextInt();
        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            int m = sc.nextInt();
            int x = sc.nextInt();
            int[] sto = new int[x + 1];
            sto[1] = 1;
            for (int i = 2; i < x + 1; i++) {
                int temp = (m % i);
                if (temp == 0)
                    temp = i;
                sto[i] = sto[i - 1];
                if (sto[i] >= temp)
                    sto[i]++;
            }

            for (int i = 1; i <= x; i++)
                sb.append(sto[i]).append('\n');
        }
        System.out.println(sb.toString());
    }
}