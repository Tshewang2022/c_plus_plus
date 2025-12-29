package main

import (
	"fmt"
)

// it follows the fork join model in go concurrency
// concurrency in go=> the process of making go to exe multiple task
// learning about the go-routine and channels(communication between the ) for the go concurrency
// what is mean by the concurrency patterns
// what is mean by pipelines
func main() {
	// making the channel
	mychannel := make(chan string)
	anotherchannel := make(chan string)

	// creating the go routine
	go func() {
		mychannel <- "data"
	}()
	go func() {
		anotherchannel <- "cow"
	}()
	// read the message from the channel
	select {
	case mysgFrmMyChannel := <-mychannel:
		fmt.Println(mysgFrmMyChannel)

	case msgFrmAnotherChannel := <-anotherchannel:
		fmt.Println(msgFrmAnotherChannel)
	}

}
