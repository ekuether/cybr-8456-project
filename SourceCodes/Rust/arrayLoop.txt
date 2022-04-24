fn main() {
    let arr = [1,2,3,4,5,6,7,8,9,10];
    let mut count = 0;

    loop {
        if count == 10 {
            break;
        }
        println!("{}", &arr[count]);
        count += 1;
    }

}