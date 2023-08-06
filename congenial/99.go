package main

import "fmt"

func main() {
	var mph int
	fmt.Scanf("%d", &mph)
	fmt.Printf("%.2f\n", float64(mph)/0.62137)
}
