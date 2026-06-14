# STUDENT-RECORD-MANAGEMENT-SYSTEM
Console-based student record management system in C using a doubly linked list. Supports add, delete, modify, sort, reverse, and file persistence.
# Student Record Management System

A console-based C application to manage student records using a **doubly linked list** data structure. Data is persisted to text files between sessions.

---

## Features

- Add new student records (name + percentage)
- List all records in a formatted table
- Delete a record by name or register number
- Modify a record by name or register number
- Sort records by name or mark
- Reverse the list view
- Save records to file
- Delete all records from file
- Auto-incremented register numbers, persisted across sessions

---

## File Structure

| File | Purpose |
|------|---------|
| `main.c` | Entry point; loads register number from file |
| `option.c` | Main event loop and menu dispatch |
| `menu.c` | Renders the text-based menu |
| `add.c` | Add new student records |
| `list.c` | Display all records (oldest first) |
| `rev.c` | Display all records (newest first) |
| `delt.c` | Delete a single record |
| `deltall.c` | Delete all records from file |
| `modify.c` | Modify an existing record |
| `sort.c` | Sort records by name or mark |
| `save.c` | Persist records to `student-data.txt` |

---

## Data Structure

Each student node contains:

```c
typedef struct node {
    unsigned int r;    // Register number
    char n[30];        // Name
    unsigned int l;    // Name length
    unsigned int p;    // Percentage / mark
    struct node* nx1;  // Pointer to previous node (toward head)
    struct node* nx2;  // Pointer to next node (toward tail)
} nd;
```

Records are stored in a doubly linked list. `h` points to the most recently added node (head); `t` points to the oldest (tail).

---

## Getting Started

### Prerequisites

- GCC compiler (Linux / Windows / macOS)
- Two data files must exist before running:

```bash
echo "0" > roll-number.txt
touch student-data.txt
```

### Compile & Run

```bash
gcc main.c -o student_record
./student_record
```

> **Note:** All source files are `#include`d into `option.c` and `main.c`, so only `main.c` needs to be compiled.

---

## Usage

Use the menu keys to navigate:

| Key | Action |
|-----|--------|
| A/a | Add a new record |
| D/d | Delete a record |
| S/s | Show the list |
| M/m | Modify a record |
| V/v | Save to file |
| T/t | Sort the list |
| R/r | Reverse view |
| L/l | Delete all records |
| E/e | Exit |

> Names must be entered in **lowercase letters**.

---

## Data Persistence

- **`student-data.txt`** — stores records as tab-separated values: `register  name  percentage  length`
- **`roll-number.txt`** — stores the last used register number so it auto-increments across sessions

---

## Known Limitations

- No file-load-into-memory on startup (records saved to file are not reloaded into the linked list on next run)
- `system("cls")` is Windows-specific; replace with `system("clear")` on Linux/macOS
- Name buffer is 30 characters; no overflow protection
- Sort is O(n²) by linear scan per value (0–100 for marks, a–z for names)

---

## License

This project is open source. Feel free to use, modify, and distribute.
