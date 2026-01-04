package store

import (
	"context"
	"database/sql"
)

type Storage struct {
	Posts interface {
		Create(context.Context) error
	}

	Users interface {
		Create(context.Context) error
	}
}

// very powerful patterns , that we can write in
func NewStorage(db *sql.DB) Storage {
	return Storage{
		Posts: &PostsStore{db},
		Users: &UsersStore{db},
	}
}
