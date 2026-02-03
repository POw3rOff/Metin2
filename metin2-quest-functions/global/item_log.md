# item_log()
Функция **item_log** сохраняет логи, привязанные к персонажу и предмету, в таблицу `log.log`.

## Parâmetros da função
### item_vnum
Tipo *number*. **Parâmetro obrigatório**. ID do item, который будет сохранен в поле `what`. По умолчанию параметр равен `0`.

### how
Tipo *string*. Dados que serão inseridos no campo `how`. Por defeito, o parâmetro é uma string vazia.

### hint
Tipo *string*. Dados que serão inseridos no campo `hint`. Por defeito, o parâmetro é uma string vazia.

## Notas
A função **não** pode ser chamada anonimamente.

O ID do jogador também é inserido no campo `who` da tabela `log.log` `who`.

Предмет из параметра [item_vnum](#item_vnum) должен существовать в таблице `player.item_proto`.