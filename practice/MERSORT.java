/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void merge(ArrayList<Integer> arr, ArrayList<Integer> left, ArrayList<Integer> right){
        int i=0,j=0,k=0;
        while(i<left.size() && j<right.size()){
            if(left.get(i)<=right.get(j)){
                arr.set(k,left.get(i));
                k++;
                i++;
            }
            else{
                arr.set(k,right.get(j));
                k++;
                j++;
            }
        }
        while(i<left.size()){
            arr.set(k,left.get(i));
            k++;
            i++;
        }
        while(j<right.size()){
            arr.set(k,right.get(j));
            k++;
            j++;
        }
    }
    public static void mergeSort(ArrayList<Integer> arr){
        int n=arr.size();
        int mid=n/2;
        ArrayList<Integer> left=new ArrayList<Integer>();
        ArrayList<Integer> right=new ArrayList<Integer>();
        for(int i=0;i<mid;i++)
            left.add(arr.get(i));
        for(int i=mid;i<n;i++)
            right.add(arr.get(i));
        if(n>1){
            mergeSort(left);
            mergeSort(right);
        }
        merge(arr,left,right);
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int tests=sc.nextInt();
		for(int z=1;z<=tests;z++){
		    int n=sc.nextInt();
		    ArrayList<Integer> arr = new ArrayList<Integer>();
		    for(int i=0;i<n;i++){
		        int a=sc.nextInt();
		        arr.add(a);
		    }
		    mergeSort(arr);
		    for (int i=0; i<arr.size(); i++) 
                System.out.print(arr.get(i)+" ");
            System.out.println();
		}
	}
}
