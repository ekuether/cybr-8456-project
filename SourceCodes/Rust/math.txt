use std::f64;
fn main() {
    let arr: [i8; 5] = [1,2,3,4,5];
    let mut addition: i8 = 0;
    let mut multiplication: i8 = 1;
    let mut subtraction: i8 = 15;
    let mut division:i8 = 120;
    let mut count = 0;

    loop {
        if count == 5 {
            break;
        }
        addition += arr[count];
        count += 1;
    }
    count = 0;
    loop {
        if count == 5 {
            break;
        }
        multiplication *= arr[count];
        count += 1;
    }
    count = 0;
    loop {
        if count == 5 {
            break;
        }
        subtraction -= arr[count];
        count += 1;
    }
    count = 0;
    loop {
        if count == 5 {
            break;
        }
        division /= arr[count];
        count += 1;
    }

    println!("{}",addition);
    println!("{}",multiplication);
    println!("{}",subtraction);
    println!("{}",division);
    let num = addition as f64;
    println!("{}",num.sin());
    let num = multiplication as f64;
    println!("{}",num.powf(num));
    let num = subtraction as f64;
    println!("{}",num.exp());
    let num = division as f64;
    println!("{}",num.abs());
}