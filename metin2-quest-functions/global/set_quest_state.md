# set_quest_state()
Функция **set_quest_state** позволяет поменять стадию у определенного квеста.

## Parâmetros da função
### quest_name
Tipo *string*. **Parâmetro obrigatório**. Nome da missão. Não deve especificar o nome do ficheiro da missão, mas sim como nomeou a missão na construção `quest ... begin`.

### state
Tipo *string*. **Parâmetro obrigatório**. Название стадии, которая будет установлена этому квесту. В отличие от функции [set_state](../global/set_state.md)(), в этой функции этот параметр указывается с кавычками.

## Notas
A função **não** pode ser chamada anonimamente.

A fase deve estar presente na missão, caso contrário, a transição para a fase não será realizada.