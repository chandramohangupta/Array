//package LOOPSALL;
import java.util.Scanner;

  public class forloop{
    public static void main(String[] args){
      Scanner mohan =new Scanner(System.in);
      int No =mohan.nextInt();

      if((No>=1)){
        System.out.println("The no is not prime"+No);
        return;
      }
      else{
        for(int i=2; i<=No; i++){
          if(No%i==0){
            System.out.println("No is prime"+No);
            return;
          }
          else{
            System.out.println("Not prime"+No);
            return;
          }

        }
      }

      

      


        System.out.println("hii");
    }
    
}
