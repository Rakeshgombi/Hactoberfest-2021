use std::io;
use std::io::Write;

fn main() {
    let mut input = String::new();
    
    print!("Enter a number: ");

    io::stdout().flush().unwrap();

    io::stdin().read_line(&mut input).expect("failed to read input!");

    match input.trim().parse::<u32>() {
        Ok(num) => println!("{}", fibonacci(num)),
        Err(..) => println!("invalid input!")
    };
}

fn fibonacci(n:u32) -> u32 {
    if n <= 1 {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
