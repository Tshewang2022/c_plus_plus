package main

// error handling in go;
import (
	"context"
	"errors"
	"fmt"
	"log"
)

var (
	ErrorNotImplemented = errors.New("not implemented")
	ErrorTruckNotFound  = errors.New("truck not found")
)

type Truck interface {
	// it is just the blue prints
	LoadCargo() error
	UnloadCargo() error
}

type NormalTruck struct {
	id    string
	cargo int
}

func (t NormalTruck) LoadCargo() error {
	return nil
}

func (t NormalTruck) UnloadCargo() error {
	return nil
}

func processTruck(truck Truck) error {
	err := truck.LoadCargo()
	if err != nil {
		return fmt.Errorf("Error loading cargo: %w", err)
	}

	err = truck.UnloadCargo()
	if err != nil {
		return fmt.Errorf("Errir unloadin the cargo %w", err)
	}

	return nil
}
func main() {
	trucks := []NormalTruck{
		{id: "Truck-1"},
		{id: "Truck-2"},
		{id: "Truck-3"},
	}

	for _, truck := range trucks {
		ctx := context.Background()
		fmt.Printf("Truck %s arrived. \n", truck.id)
		go processTruck(truck)

		// if the error other than nil, this method is explicitly checking for the errors

		// another way of handling the error

		if err := processTruck(truck); err != nil {
			if errors.Is(err, ErrorNotImplemented) {
				// we can do this
			}

			if errors.Is(err, ErrorTruckNotFound) {
				// we can implement this
			}

			log.Fatalf("Error processing truck: %s", err)
		}

	}
}
