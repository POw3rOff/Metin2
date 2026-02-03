# char_log()
Функция **char_log** сохраняет логи, привязанные к персонажу, в таблицу `log.log`.

## Parâmetros da função
### what
Tipo *number*. Dados que serão inseridos no campo `what`. По умолчанию параметр равен `0`.

### how
Tipo *string*. Dados que serão inseridos no campo `how`. Por defeito, o parâmetro é uma string vazia.

### hint
Tipo *string*. Dados que serão inseridos no campo `hint`. Por defeito, o parâmetro é uma string vazia.

## Notas
A função **não** pode ser chamada anonimamente.

O ID do jogador também é inserido no campo `who` da tabela `log.log` `who`.