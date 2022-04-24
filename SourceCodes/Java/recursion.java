public class recursion {
    public static void main(String args[]) {
        System.out.println(fib(44));
    }

    private static int fib(int val) {
        if (val == 1 || val == 0) {
            return 1;
        }
        return fib(val - 1) + fib(val - 2);
    }
}