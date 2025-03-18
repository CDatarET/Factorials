import java.util.Scanner;

class Main {
	public static long factorial(int a){
		if(a >= 1){
			return(a*factorial(a-1));
		}
		else{
			return(1);
		}
}

    public static void main(String[] args) {
    	Scanner scan = new Scanner(System.in);
    	System.out.println("Enter a number for factorial");
    	int a = scan.nextInt();
    	
    	long fac = 1;
	for(int i = 1; i <= a; i++){
		fac = fac * i;
	}
    	
    	System.out.println(a + "! is " + fac);
    	System.out.println(a + "! is " + factorial(a));
    }
}
