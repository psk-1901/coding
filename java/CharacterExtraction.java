public class CharacterExtraction
{
 	 public static void main(String args[])
{
String str="Hello World";
char ch1 = str.charAt(3);
char ch2= "Bhuvana".charAt(2);
System.out.println("charAt() method output is::"+ch1);
System.out.println("charAt() method output is::"+ch2);
int start = 2;
int end = 6;
char buf[] = new char[end - start];
str.getChars(end,start,buf,0);
System.out.println("getChars() method ouptput is::");
System.out.println(buf);
System.out.println();
byte barr[] = str.getBytes();
for(int i=0;i<str.length();i++)
  			System.out.print(barr[i]);
 System.out.println();
char chararray[] = str.toCharArray();
   		 System.out.println(chararray);
}}
