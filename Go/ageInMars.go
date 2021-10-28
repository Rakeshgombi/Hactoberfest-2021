package main

import "fmt"

func main() {
	var age int

	fmt.Println("input Age: ")
	fmt.Scanln(&age)

	mars := age * 365/ 687

	fmt.Println("Your age in mars: ", mars)

}