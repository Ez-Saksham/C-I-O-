# 🗂️ SAKXAMYDV — Python & C Projects

![Made by](https://img.shields.io/badge/Made%20by-SAKXAMYDV-purple) ![Year](https://img.shields.io/badge/Year-2025-gray) ![Level](https://img.shields.io/badge/Level-Beginner-green)

A collection of beginner exercise projects exploring Python and C fundamentals — file handling, dictionaries, loops, and CLI interaction.

---

## 📒 Project 1 — Contact Book (Python)

![Python](https://img.shields.io/badge/Python-3.x-blue) ![Type](https://img.shields.io/badge/Type-CLI-purple)

A command-line contact book that lets you manage contacts stored in a dictionary during the session.

### Features
- **Add** one or multiple contacts at once
- **View** all saved contacts in a list
- **Search** for a contact by name
- **Update** an existing contact's number
- **Delete** a contact (with confirmation)

### Run

```bash
python contact_book.py
```

### Usage

| Input | Action |
|-------|--------|
| `1` | Add new contact(s) |
| `2` | View all contacts |
| `3` | Search for a contact |
| `4` | Update a contact's number |
| `5` | Delete a contact |

### Notes
- Contacts are stored in memory and reset when the script exits.
- Names are automatically uppercased for consistency.
- To pre-load contacts, add them directly to the `contact = {}` dictionary in the script.

---

## 🎓 Project 2 — Student Records Manager (C)

![C](https://img.shields.io/badge/Language-C-blue) ![Type](https://img.shields.io/badge/Type-File--IO-orange)

A C program to write and read student records using file handling. Saves data to a `.txt` file that persists between runs.

### Features
- **Write mode** — enter student details and save them to a `.txt` file
- **Read mode** — retrieve and display all saved student records in the terminal
- Data is saved to `studentsdata.txt` and persists between runs

### Compile & Run

```bash
gcc student_records.c -o student_records
./student_records
```

### Usage

| Input | Action |
|-------|--------|
| `1` | Write — add student records to file |
| `2` | Read — display all saved records |

When writing, you'll be asked for each student's name, class, and GPA.

### Notes
- `studentsdata.txt` is created automatically on first write.
- Running write mode again will overwrite the existing file.

---

> These are exercise projects made for learning — not production-ready. Known bugs will be fixed as I learn more.

*Made by SAKXAMYDV · 2025*
