fn main() {
    println!("{}",fib(44));
}

fn fib(val: i128) -> i128 {
    if val == 1 || val == 0 {
        return 1;
    }
    return fib(val - 1) + fib(val - 2);
}