package Github;

import java.util.Scanner;

public class LinearSearch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		// enter the size of array
		int n = scn.nextInt();
		// enter array
		int a[] = new int[n];
		for(int j = 0;j<n;j++){
			a[j] = scn.nextInt();
		}
		// enter element to be searched
		int ele = scn.nextInt();
		System.out.println(linearsearch(a, ele));
	}
	
	public static int linearsearch(int []a,int ele){
		int pos = -1;
		for (int i = 0; i < a.length; i++) {
			if (a[i] == ele) {
				// System.out.println(i);
				pos = i + 1;
			}
		}
		return pos;
	}
}
