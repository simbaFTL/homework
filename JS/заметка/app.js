const noteInput = document.getElementById('note-input');
const addNoteButton = document.getElementById('add-note');
const notesContainer = document.getElementById('notes-container');

let notes = JSON.parse(localStorage.getItem('notes')) || [];

function renderNotes() {
  notesContainer.innerHTML = '';
  notes.forEach((note, index) => {
    const noteElement = document.createElement('div');
    noteElement.classList.add('note');
    noteElement.innerHTML = `
      ${note}
      <div class="actions">
        <button onclick="editNote(${index})">Изменить</button>
        <button onclick="deleteNote(${index})">Удалить</button>
      </div>
    `;
    notesContainer.appendChild(noteElement);
  });
}

function addNote() {
  const noteText = noteInput.value.trim();
  if (noteText) {
    notes.push(noteText);
    saveNotes();
    noteInput.value = '';
    renderNotes();
  }
}

function editNote(index) {
  const newNoteText = prompt('Введите новую заметку', notes[index]);
  if (newNoteText !== null) {
    notes[index] = newNoteText.trim();
    saveNotes();
    renderNotes();
  }
}

function deleteNote(index) {
  notes.splice(index, 1);
  saveNotes();
  renderNotes();
}

function saveNotes() {
  localStorage.setItem('notes', JSON.stringify(notes));
}

addNoteButton.addEventListener('click', addNote);
renderNotes();