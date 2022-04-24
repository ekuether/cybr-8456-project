public class functions {
    public static void main(String args[]) {
        printOne(1);
        printTwo(2);
        printThree(3);
        printFour(4);
        printFive(5);
    }

    private static void printOne(int val) {
        System.out.println(val);
    }
    private static void printTwo(int val) {
        System.out.println(val);
        printOne(val);
    }
    private static void printThree(int val) {
        System.out.println(val);
        printTwo(val);
    }
    private static void printFour(int val) {
        System.out.println(val);
        printThree(val);
    }
    private static void printFive(int val) {
        System.out.println(val);
        printFour(val);
    }
}