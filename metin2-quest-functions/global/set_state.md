# set_state()
Функция **set_state** позволяет перейти в другую стадию квеста.

## Parâmetros da função
### state
Tipo *string*. **Parâmetro obrigatório**. Название стадии, в которую перейдет квест. Название стадии должно указываться без кавычек, а также должно начинаться с латинской буквы.

## Notas
A função **não** pode ser chamada anonimamente.

Нельзя установить ту же стадию, в ao qual сейчас находится игрок. Т.е. внутри стадии start нельзя написать `set_state(start)`.

A fase deve estar presente na missão, caso contrário, a transição para a fase não será realizada.

Когда в квесте задаются стадии, внутри квеста создаются переменные, соответствующие имени стадии. В качестве параметра этой функции вы передаете название этой переменной.