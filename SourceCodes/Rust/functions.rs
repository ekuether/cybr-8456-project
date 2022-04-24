fn main() {
    print_one(1);
    print_two(2);
    print_three(3);
    print_four(4);
    print_five(5);
}

fn print_one(val: i8) {
    println!("{}",val);
}

fn print_two(val: i8) {
    println!("{}",val);
    print_one(val);
}

fn print_three(val: i8) {
    println!("{}",val);
    print_two(val);
}

fn print_four(val: i8) {
    println!("{}",val);
    print_three(val);
}

fn print_five(val: i8) {
    println!("{}",val);
    print_four(val);
}