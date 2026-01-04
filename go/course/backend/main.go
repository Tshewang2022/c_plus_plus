package main

import (
	"fmt"
	"log"
	"net/http"
)

type server struct {
	addr string
}

func (s *server) ServeHTTP(w http.ResponseWriter, r *http.Request) {
	// all the routing can be done here
	w.Write([]byte("hello from the server"))
}
func main() {
	s := &server{addr: ":8080"}

	if err := http.ListenAndServe(s.addr, s); err != nil {
		log.Fatal(err)
	}
	fmt.Print("printing\n")
}
