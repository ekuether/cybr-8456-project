public class math {
    public static void main(String args[]) {
        int arr[] = {1,2,3,4,5};
        int addition = 0;
        int multiplication = 1;
        int subtraction = 15;
        int division = 120;

        for (int i = 0; i < arr.length; i++) {
            addition += arr[i];
        }

        for (int i = 0; i < arr.length; i++) {
            multiplication *= arr[i];
        }

        for (int i = 0; i < arr.length; i++) {
            subtraction -= arr[i];
        }

        for (int i = 0; i < arr.length; i++) {
            division /= arr[i];
        }

        System.out.println(addition);
        System.out.println(multiplication);
        System.out.println(subtraction);
        System.out.println(division);
        System.out.println(Math.sin(addition));
        System.out.println(Math.pow(multiplication, multiplication));
        System.out.println(Math.exp(subtraction));
        System.out.println(Math.abs(division));
    }
}
