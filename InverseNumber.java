import java.util.*;
import java.lang.Math; 
   
   public class InverseNumber{
   
   public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n1  = scn.nextInt();
        int n2=0;
        int  i =1;
        while(n1>0)
        {
            n2 = n2  + i*((int)Math.pow(10, (n1%10)-1));
            n1 = n1/10;
            i++;
        }
        System.out.println(n2);
        
        
    }
   }
