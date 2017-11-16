package com.exam;

import java.io.File;
import java.util.Scanner;

public class PalindromTest {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        
        File file = new File("words.txt");
        String wordtocheck = "writer";
        boolean found = false;
        try {

            Scanner sc = new Scanner(file);

            while (sc.hasNextLine()) {
                String word = sc.nextLine();
                if(word.equalsIgnoreCase(wordtocheck)){
                    found = true;
                }
            }
            sc.close();
        }catch(Exception e){
            e.printStackTrace();
            } 
        
        
             if(checkPalindrom(wordtocheck)){
                 System.out.println(" Word is a Palindrome");
             }
             else{
                 System.out.println("Word is not a palindrome");
             }
             
             if(found)
             System.out.println("Word found in the list ");
             else
                 System.out.println("Word is not found in the list");
             
      }

    
    
    public static boolean checkPalindrom(String str){
        int c1 = 0;
        int c2 = str.length() - 1;
        while (c2 > c1) {
            if (str.charAt(c1) != str.charAt(c2)) {
                return false;
            }
            ++c1;
            --c2;
        }
        return true;
    }
    
    
    
    
}
