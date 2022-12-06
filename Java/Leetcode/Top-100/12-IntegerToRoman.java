/*	Leetcode 12 - Integer to roman
	This code converts an integer value to roman value.
 	A long but basic solution but faster and uses less memory than other solutions.
	Runtime 4 ms - Beats 99.87%
	Memory 41.7 MB - Beats 96.26% */

class Solution {
    public String intToRoman(int num) {
        int temp = num;
        StringBuilder sb = new StringBuilder ();

        while(temp>0){
            if(temp>=1000){
                temp-= 1000;
                sb.append('M');
            }
            if(temp>=900 && temp<1000){
                temp-=900;
                sb.append("CM");
            }
            if(temp>=500 && temp<900){
                temp-=500;
                sb.append('D');
            }
            if(temp>=400 && temp<500){
                temp-=400;
                sb.append("CD");
            }
            if(temp<400 && temp>=100){
                temp-=100;
                sb.append('C');
            }
            if(temp>=90 && temp<100){
                temp-=90;
                sb.append("XC");
            }
            if(temp>=50 && temp<90){
                temp-=50;
                sb.append('L');
            }
            if(temp>=40 && temp<50){
                temp-=40;
                sb.append("XL");
            }
            if(temp>=10 && temp<40){
                temp-=10;
                sb.append('X');
            }
            if(temp>=9 && temp<10){
                temp-=9;
                sb.append("IX");
            }
            if(temp>=5 && temp<9){
                temp-=5;
                sb.append('V');
            }
            if(temp>=4 && temp<5){
                temp-=4;
                sb.append("IV");
            }
            if(temp>=1 && temp<5){
                temp-=1;
                sb.append('I');
            }
        }
        return sb.toString();
    }
}