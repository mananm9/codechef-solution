/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void convertToBase(int num, int base){
        int res=0;
        ArrayList<Integer> arr=new ArrayList<Integer>();
        while(num>0){
            arr.add(num%base);
            num/=base;
        }
        for(int i=arr.size()-1;i>=0;i--)
            System.out.print(arr.get(i));
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc =new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    int num=sc.nextInt();
		    int base=sc.nextInt();
		    if(num==0)
                System.out.println(0);
		    convertToBase(num, base);
		    System.out.println();
		    t--;
		}
	}
}
