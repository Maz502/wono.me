
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Set;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Stallion
 */

public class Task2 {
Set<String>names=new HashSet<>();
        Iterator<String>iter=names.iterator();
    /**
     *
     * @param s
     */
    
       public  void saveData (String s){
          
           names.add(s);
           
       }
public void viewName()
     {
         iter=names.iterator();
         
         while (iter.hasNext())
         {
             String name=iter.next();
             System.out.println("Name :"+name);
         }
         
     }
        
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Task2 t2=new Task2();
       Scanner obj=new Scanner(System.in);
      
       int input;
    
       do{
           System.out.println("Press 1 to add name");
        System.out.println("Press 2 to show name");
        System.out.println("Press 0 to exit");
         System.out.println("Enter input: ");
        input=obj.nextInt();
        switch(input){
            case 1:
                Scanner sc=new Scanner(System.in);
                System.out.println("-----Add Name-----");
                System.out.println("Enter Name:");
               String name=sc.nextLine();
                
                
                 t2.saveData (name);
                 System.out.println(name);
                System.out.println("Added Successfully...");
                break;
            case 2:
                 System.out.println("-----Show Name-----");
                 
                 t2.viewName();
            break;
            case 3:
                System.out.println("Exited Successfully...");
                break;
        }
       }
       while(input!=0);
      
    }
    
}


  
