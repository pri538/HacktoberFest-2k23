import java.util.*;

class Int2Binary {
    private static String binaryString; 

    private static void int2binary(int n) {
        binaryString = Integer.toBinaryString(n);
    }

    private static void addPadding(){
        binaryString = String.format("%32s", binaryString).replaceAll(" ", "0");
    }

    private static void addBlocks(String separator) {
        StringBuffer sb = new StringBuffer();
        for (int i = 0; i< binaryString.length(); i++ ){
            sb.append(binaryString.charAt(i));
            if (i%4 == 3 && i != binaryString.length() - 1)
                sb.append(separator);
        }
        binaryString = sb.toString();
    }

    public static void convert2Binary(int n) {
        int2binary(n);
        addPadding();
        addBlocks("_");        
    }

    public static void main(String[] args) {
        int n = 10;
        for (int i = -5; i <= 5; i++){
            convert2Binary(i);
            System.out.format("Binary representation of %2d is %s\n", i, binaryString);
        }        
    }    
}