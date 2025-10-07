class HashTable {
  constructor(size = 50) {
    this.data = new Array(size);
  }

  // Hash function
  hash(key) {
    let hash = 0;
    for (let i = 0; i < key.length; i++) {
      hash = (hash + key.charCodeAt(i) * i) % this.data.length;
    }
    console.log(hash, 'hashed number');
    return hash;
  }

  // Set (insert) a key-value pair
  setItem(key, value) {
    const index = this.hash(key);
    if (!this.data[index]) {
      this.data[index] = [];
    }
    // chaining to avoid the collision
    this.data[index].push([key, value]);
  }

  // Get value by key
  getItem(key) {
    const index = this.hash(key);
    const bucket = this.data[index];
    if (bucket) {
      for (let [k, v] of bucket) {
        if (k === key) return v;
      }
    }
    return undefined;
  }

  // 🔥 Display the whole hash table
  display() {
    for (let i = 0; i < this.data.length; i++) {
      if (this.data[i]) {
        console.log(`Index ${i}:`, this.data[i]);
      }
    }
  }
}

const myTable = new HashTable(10);

myTable.setItem("name", "Alice");
// myTable.setItem("age", 25);
// myTable.setItem("city", "Paris");
// myTable.setItem("city1", "Paris");
// myTable.setItem("city2", "Paris");
// myTable.setItem("city3", "Paris");
// myTable.setItem("country", "France");

// Display the entire hash table
myTable.display();
