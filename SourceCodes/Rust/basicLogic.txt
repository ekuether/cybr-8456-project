use std::env;

fn main() {
    let args = env::args().len();
    if args > 1 {
        println!("Multiple Arguments");
    }
    else {
        println!("No Arguments");
    }
}