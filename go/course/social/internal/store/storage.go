package store

import (
	"context"
	"database/sql"
)

type Storage struct {
	Posts interface {
		Create(context.Context, *Post) error
	}

	Users interface {
		Create(context.Context, *User) error
	}
}

// very powerful patterns , that we can write in
func NewStorage(db *sql.DB) Storage {
	return Storage{
		Posts: &PostStore{db},
		Users: &UsersStore{db},
	}
}
