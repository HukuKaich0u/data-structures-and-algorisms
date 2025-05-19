package main

import (
	"fmt"
	"math"
)

func main() {
	var n, k int
	fmt.Scan(&n, &k)

	a := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	answer := false
	for i := 0; i < int(math.Pow(2, float64(n))); i++ {
		sum := 0
		for j := 0; j < n; j++ {
			wari := i / (1 << j)
			if wari%2 == 1 {
				sum += a[j]
			}
		}
		if sum == k {
			answer = true
			break
		}
	}

	fmt.Printf("%v\n", answer)
}
