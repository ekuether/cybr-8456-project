use std::env;

fn main() {

    let args: Vec<String> = env::args().collect();

    if args[1].eq(&args[2]) {
        println!("Strings are equal");
    }
    else {
        println!("Strings are false");
    }

}